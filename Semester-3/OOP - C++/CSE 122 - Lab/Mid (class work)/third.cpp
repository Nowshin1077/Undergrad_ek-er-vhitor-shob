#include<iostream>
using namespace std;
class employ{
    float salary;
public:
    string department;
    float wayes,hour;
    employ();
    employ(string,float,float,float);
    friend void cal_salary(employ);
    void display();
    void set_info();
    ~employ()
    {
    }
};
employ :: employ()
{
    salary=0.0;
    department="cse";
    wayes=200.0;
    hour=0.0;
}
employ :: employ(string a,float b,float c,float d)
{
    salary=d;
    department=a;
    wayes=b;
    hour=c;
}
 void employ::set_info()
 {
     cout << "Enter your department"<< endl;
     cin >> department;
     cout <<"Enter your hour rate"<< endl;
     cin >> wayes;
     cout <<"Enter your work hour"<< endl;
     cin >> hour;
 }
   void cal_salary(employ ob)
 {
     ob.salary=ob.wayes*ob.hour;
     cout << "Salary: "<<ob.salary<<endl;
 }
 void employ :: display()
 {
     cout << "Department of "<< department << endl;
     cout << "Hour rate: " << wayes << endl;
     cout << "Work time: "<< hour<< endl;
 }

 int main()
 {
     employ em_1,em_2("cse",200.0,0.0,0.0);
     em_1.set_info();
     em_1.display();
     cal_salary(em_1);
     em_2.set_info();
     em_2.display();
     cal_salary(em_2);
 }



