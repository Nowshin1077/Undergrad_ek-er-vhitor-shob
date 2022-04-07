
#include <stdio.h>
int i=0;
int id_chk;
struct rail
{
	int  id,day,month,year,hour,min,seat_no;
	char train[50],name[50],status;
}r[10];

add()
{
	printf("\n\n============== +Add Records+ ===============\n\n");
	for(i=0;i<=9;i++)
	{
		printf("\nEnter Ticket id : ");
		scanf("%d",&r[i].id);
		printf("\nEnter Customer's name : ");
		fflush(stdin);
		scanf("%s",&r[i].name);
		printf("\nEnter Train name : ");
		fflush(stdin);
		scanf("%s",&r[i].train);
		printf("\nEnter Seat Number : ");
		scanf("%d",&r[i].seat_no);
		printf("\nEnter date (dd/mm/yy) :");
		scanf("%d %d %d",&r[i].day,&r[i].month,&r[i].year);
		printf("\nEnter depature time (hour/minute) : ");
		scanf("%d %d",&r[i].hour,&r[i].min);
		printf("\nEnter Confirmation Status (y/n) : ");
		fflush(stdin);
		scanf("%c",&r[i].status);
	}
	printf("\n\n==========================================\n\n");

}

details()
{
	printf("\nEnter ticket Id :\n");
	scanf("%d",&id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for(i=0;i<=9;i++)
	{
		if(id_chk==r[i].id)
		{
			printf("\nTicket id : %d",r[i].id);
			printf("\nName : %s",r[i].train);
			printf("\nTrain name : %s",r[i].name);
			printf("\nSeat number : %d",r[i].seat_no);
			printf("\nDate (dd/mm/yy) : %d / %d / %d",r[i].day,r[i].month,r[i].year);
			printf("\nDepature time (hour/minute) : %d : %d",r[i].hour,r[i].min);
			if(r[i].status=='Y' || r[i].status=='y')
				printf("\nConfirmation Status : Confirmed");
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");

}

status()
{
	printf("\nEnter ticket Id :\n");
	scanf("%d",&id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for(i=0;i<=9;i++)
	{
		if(id_chk==r[i].id)
		{
			if(r[i].status=='Y' || r[i].status=='y')
			{
				printf("\nName : %s",r[i].train);
				printf("\nSeat Number : %d",r[i].seat_no);
				printf("\nConfirmation Status : Confirmed");
			}
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");

}


int main()
{
	int i,ch;
	printf("==================Welcome to railway sevices================= \n\n");
	while(1)
	{
		printf("1.Add Details : \n");
		printf("2.Ticket number id (Check details): \n");
		printf("3.Ticket number (Check Status): \n");
		printf("4.Exit : \n ");
		printf("\nEnter ur choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				details();
				break;
			case 3:
				status();
				break;
			case 4:
					break;
			default:
				printf("Invalid option");
				break;
		}
	}
	return 0;
}




/*Output :
==================Welcome to railway sevices================

1.Add Details :
2.Ticket number id (Check details):
3.Ticket number (Check Status):
4.Exit :

Enter ur choice :
1


============== +Add Records+ ===============


Enter Ticket id : 115

Enter Customer's name : david beckham

Enter Train name : express

Enter Seat Number : 45

Enter date (dd/mm/yy) :12
5
2017

Enter depature time (hour/minute) : 5
00

Enter Confirmation Status (y/n) : Y

Enter Ticket id : 11

Enter Customer's name : oliver

Enter Train name : local

Enter Seat Number : 12

Enter date (dd/mm/yy) :12
6
2016

Enter depature time (hour/minute) : 2
50

Enter Confirmation Status (y/n) : n

Enter Ticket id : 54

Enter Customer's name : jack

Enter Train name : goa express

Enter Confirmation Status (y/n) : n

Enter Ticket id : 158

Enter Customer's name : sdf

Enter Train name : chennai

Enter Seat Number : 34

Enter date (dd/mm/yy) :12
4
2017

Enter depature time (hour/minute) : 12
12

Enter Confirmation Status (y/n) : y

Enter Ticket id : 34

Enter Customer's name : xyz

Enter Train name : madras

Enter Seat Number : 78

Enter date (dd/mm/yy) :12
54
2018

Enter depature time (hour/minute) : n

Enter Confirmation Status (y/n) : Y

Enter Ticket id : 45

Enter Customer's name : abc

Enter Train name : pune

Enter Seat Number : 97

Enter date (dd/mm/yy) :12
2
2015

Enter depature time (hour/minute) : 23
6

Enter Confirmation Status (y/n) : Y

Enter Ticket id : 56

Enter Customer's name : pqr

Enter Train name : abu

Enter Seat Number : 56

Enter date (dd/mm/yy) :12
9
2017

Enter depature time (hour/minute) : 23
67

Enter Confirmation Status (y/n) : n

Enter Ticket id : 34

Enter Customer's name : dfg

Enter Train name : mumbai

Enter Seat Number : 56

Enter date (dd/mm/yy) :13
7
2016

Enter depature time (hour/minute) : 5
6

Enter Confirmation Status (y/n) : n

Enter Ticket id : 34

Enter Customer's name : ashley

Enter Train name : surat

Enter Seat Number : 64

Enter date (dd/mm/yy) :12
4
2016

Enter depature time (hour/minute) : 12
12

Enter Confirmation Status (y/n) : y

Enter Ticket id : 34

Enter Customer's name : bdg

Enter Train name : jammu and kashmir

Enter Confirmation Status (y/n) : y


==========================================

1.Add Details :
2.Ticket number id (Check details):
3.Ticket number (Check Status):
4.Exit :

Enter ur choice :
3

Enter ticket Id :
12


================== Customers Record ==================



1.Add Details :
2.Ticket number id (Check details):
3.Ticket number (Check Status):
4.Exit :

Enter ur choice :
2

Enter ticket Id :
11


================== Customers Record ==================



Ticket id : 11
Name : local
Train name : oliver
Seat number : 12
Date (dd/mm/yy) : 12 / 6 / 2016
Depature time (hour/minute) : 2 : 50
Confirmation Status : Waiting
*/
