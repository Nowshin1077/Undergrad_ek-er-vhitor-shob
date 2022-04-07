
#include <stdio.h>

main()
{
int roll,phy,che,ca,total,count;
char name;
printf("Roll No: ");
scanf("%d",&roll);
printf("Name of the Student: James\n");
scanf("%c",&name);
printf("Marks in Physics: ");
scanf("%d",&phy);
printf("Marks in Chemistry: ");
scanf("%d",&che);
printf("Marks in Computer Application: ");
scanf("%d",&ca);
total=(phy+che+ca);
printf("Total Marks= %d\n",total);
count=total/3;
{if(count>=80)
printf("Percentage= 80.00\n");
else if(count>=70)
printf("Percentage= 70.00\n");
else if(count>=60)
printf("Percentage= 60.00\n");
else if(count>=50)
printf("Percentage= 50.00\n");}
switch(count/10)
{
case 1:
case 2:
case 3:
printf("Division= F\n");
break;
case 4:
printf("Division= D\n");
break;
case 5:
printf("Division= C\n");
break;
case 6:
printf("Division= B\n");
break;
case 7:
printf("Division= A\n");
break;
case 8:
case 9:
case 10:
printf("Division= A+\n");
break;
}
return 0;
}
