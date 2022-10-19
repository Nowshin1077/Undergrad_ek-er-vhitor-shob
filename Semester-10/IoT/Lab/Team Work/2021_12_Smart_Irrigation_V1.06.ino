#include <WiFi.h>
#include "ThingSpeak.h"

#define IRS1        32
#define IRS2        33
#define MOISTURE1   35
#define PUMP        25
#define LED         2
#define WAIT_TIME   1500
#define UPLOAD_TIME 45000
#define READ_TIME   10000



const char* ssid = "SRSP";   // your network SSID (name) 
const char* password = "10-16562-2";   // your network password

WiFiClient  client;

//unsigned long myChannelNumber = 808584;
//const char * myWriteAPIKey = "0IE4X07ZCDKYH4GS";

unsigned long myChannelNumber = 1572174;
const char * myWriteAPIKey = "IE05PHEEC79SPRUM";



long time_ms;
long time_s;
long last_time_ms;
long last_time_ms2;

long time_wait;

bool pumpON;
bool ir1;
bool ir2;

long adc_mositure;
long adc_mositure_average;
long adc_mositure_count = 0;
int moist_percent;
int rainData;

bool upload_lock = false;
bool read_lock = false;

//==================================================================

void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  
  pinMode (PUMP, OUTPUT);
  pinMode (LED, OUTPUT);
  pinMode (IRS1, INPUT);
  pinMode (IRS2, INPUT);

  digitalWrite (PUMP, HIGH);
  digitalWrite (LED, LOW);

  Serial.println ("Smart Irrigation System");
  Serial.println ("Group Name: Spartans");
  Serial.println ("Course: IoT Lab");

  delay (2000);

  ThingSpeak.begin(client);  // Initialize ThingSpeak
  connectWifi (ssid,password);
  
  time_wait = millis() + WAIT_TIME;
  last_time_ms = millis ();
  last_time_ms2 = last_time_ms;
}
//===================================================================

void loop() {
  // put your main code here, to run repeatedly:
  time_ms = millis();
  time_s = time_ms/1000;

  serilaCheck ();

  moist_percent = getMoisture ();
  readIR ();
  pumpControl ();
  debugPrint ();
  
  thingsSpeakUp ();
  thingaSpeakRead();
}
//=================================================================
void pumpControl () {
  if (pumpON)
  digitalWrite (PUMP, LOW); // PUMP ON
  else
  digitalWrite (PUMP,HIGH); // PUMP OFF - RELAY OFF
}
//=================================================================
void serilaCheck () {
  if (Serial.peek () == '1')
  pumpON = true;
  if (Serial.peek () == '2')
  pumpON = false;
  Serial.read ();
}

//==================================================================

void debugPrint () {
    if (millis() > time_wait) {
    Serial.print ("RUNTIME    : "); Serial.println (time_ms);
    Serial.print ("IR1        : "); Serial.println (ir1);
    Serial.print ("IR2        : "); Serial.println (ir2);
    Serial.print ("MOIST      : "); Serial.println (moist_percent);
    Serial.print ("RAIN PRECIP: "); Serial.println (rainData);
    Serial.print ("PUMP       : "); Serial.println (pumpON);
    Serial.print ("LAST UPLOAD: "); Serial.println (last_time_ms);
    Serial.print ("LAST READ  : "); Serial.println (last_time_ms2);
    Serial.print ("UPLOAD IN  : "); Serial.println ((UPLOAD_TIME - (time_ms-last_time_ms)));
    Serial.print ("READ IN    : "); Serial.println ((READ_TIME - (time_ms-last_time_ms2)));
    Serial.println (" ");
   
    time_wait = millis() + WAIT_TIME;
  }
}
//==================================================================
int getMoisture () {

  //Serial.println ("get moisture");
  
   adc_mositure = analogRead (MOISTURE1);
   //adc_mositure = 1000;

   adc_mositure_average = adc_mositure_average + adc_mositure;
   adc_mositure_count ++;

   if (adc_mositure_count > 100){
    adc_mositure_average = adc_mositure_average / adc_mositure_count;
    adc_mositure_count = 0;
   }

  return map(adc_mositure, 0, 4095, 100, 0);
}
//==================================================================
void readIR () {
  
    if (!digitalRead (IRS1))
    ir1 = true;
    if (!digitalRead (IRS2))
    ir2 = true;
}
//===================================================================
void uploadChannel (int channle, int dataVal) {
  upload_lock = true;
    int x = ThingSpeak.writeField(myChannelNumber, channle, dataVal, myWriteAPIKey);
    if(x == 200){
    Serial.print("Channel update successful: "); Serial.println (channle);
    if (ir1)
    ir1 = false;
    if (ir2)
    ir2 = false;
    }
    else{
      Serial.println("HTTP error code " + String(x));
    }
    upload_lock = false;
}
//==================================================================
void thingsSpeakUp ( ) {

    if (time_s < 3)
    return;

    if (read_lock)
    return;

    if ((time_ms - last_time_ms > UPLOAD_TIME)  && !upload_lock) {
      upload_lock = true;
      Serial.println("Moisture Regular Upload");
//    uploadChannel (1, moist_percent);
//    delay (500);
    rainData =   getWeatherinfo ();
    delay (500);
    ThingSpeak.setField(1, moist_percent);
    ThingSpeak.setField(4, rainData);
    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    if (x=200)
    Serial.println ("Upload Successful");
    else
    Serial.print ("Error: "); Serial.println (x);
//    delay (10000);
//    uploadChannel (4, rainData);
    last_time_ms = time_ms;
    upload_lock = false;
    }

    if ((moist_percent < 0 || moist_percent > 100) && !upload_lock) {
       Serial.println("Moisture Out of Range");
      uploadChannel (1, moist_percent);
    }
    if (ir1 && !upload_lock) {
      Serial.println("IR 1 Detected");
      uploadChannel (2, ir1);
    }

    if (ir2 && !upload_lock) {
      Serial.println("IR 2 Detected");
      uploadChannel (3, ir2);
    }
}

//====================================================================
void thingaSpeakRead() {
  if (upload_lock)
  return;
  if (time_ms - last_time_ms2 > READ_TIME){
     read_lock = true;
    Serial.println("Reading Channel");
  int reply = ThingSpeak.readFloatField(myChannelNumber,5);    // rad the last data of the field 1
 Serial.println (reply);
 if(reply == 1)
 {
   Serial.print("Pump ON Command Received - "); Serial.println (reply);
   pumpON = true;
 }
 else if(reply == 2)
 {
   Serial.print("Pump OFF Command Received - ");Serial.println (reply);
   pumpON = false;
 }
 last_time_ms2 = time_ms;
 read_lock = false;
}

}

//==================================================================

void connectWifi (const char* id, const char* pass){
  int retryCount = 60;
  WiFi.mode(WIFI_STA);
  delay (100);
  Serial.printf("Connecting to %s ", id);
  WiFi.begin(id, pass);
  while (retryCount>0) {
  retryCount --;

  delay(500);
  Serial.print(".");
  
  if ( WiFi.status() == WL_CONNECTED){
  Serial.println(" CONNECTED");
  retryCount = 0;
  }
  }
}

//===============================================================
void disconnectWifi () {
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}
//=================================================================
int getWeatherinfo () {


//  const char* host = "api.openweathermap.org";
//  const int httpPort = 80;
//
//  String url = "/data/2.5/onecall?";
//
//  url += "lat=29.798";
//  url += "&lon=90.365";
//  url += "&exclude=alerts,current,daily,hourly";
//  url += "&appid=13e06b2a0606c1e072372f5fac43cb97";

  const char* host = "api.weather.com";
  const int httpPort = 80;

  String url = "/v3/wx/forecast/daily/5day?";

  url += "geocode=23.7657016,90.4405956";
  url += "&format=json";
  url += "&units=m";
  url += "&language=en-US";
  url += "&apiKey=0e9a1a844a4c4d3c9a1a844a4c8d3c05";

  if (!client.connect(host, httpPort))
    {
      Serial.println("Connection failed");
      return 0;
    }
    else
    {
      Serial.println("Connection succeeded");
    }

    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + host + "\r\n" +
                 "Connection: close\r\n\r\n");

    // Give Weather Underground five seconds to reply.
    unsigned long timeout = millis();
    while (!client.available()) 
    {
      if (millis() - timeout > 5000) 
      {
          Serial.println("Timeout");
          client.stop();
         return 0;
      }
    }

    String line;

    while(client.available()) 
    {
       line = client.readStringUntil('\r');
      Serial.print(line);
    }
    Serial.println(" ");
    
//    int index = line.indexOf("precipitation");
//    Serial.println(index);
//    String rainString = line.substring(index-1, index+17);
//    Serial.println(rainString);
//    int rain = rainString.toInt() ;
//    Serial.println(rain);

    int index = line.indexOf("precipChance");
    Serial.println(index);
    String rainString1 = line.substring(index-1, index+22);
    Serial.println(rainString1);
    
    index = rainString1.indexOf(",");
    Serial.println(index);
    String rainString2 = rainString1.substring(index+1, index+3);
    Serial.println(rainString2);

    int rain = rainString2.toInt() ;
    Serial.println(rain);
    
    return rain;
}
//=======================================================================
void testAll () {
    if (millis() > time_wait) {
    ir1 = digitalRead (IRS1);
    ir2 = digitalRead (IRS2);
    adc_mositure = analogRead (MOISTURE1);

    digitalWrite (LED, !digitalRead(LED));
    digitalWrite (PUMP, !digitalRead(PUMP));

    Serial.print ("IR1: "); Serial.println (ir1);
    Serial.print ("IR2: "); Serial.println (ir2);
    Serial.print ("ADC: "); Serial.println (adc_mositure);

    time_wait = millis() + WAIT_TIME;
    
  }
}
