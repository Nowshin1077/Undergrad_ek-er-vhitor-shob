#include<stdio.h>
int main()
{
    int math,phy,chem,t1,t2;
    printf("Enter the obtained marks of math,phy and chem:");
    scanf("%d %d %d",&math,&phy,&chem);
    t1=math+phy+chem;
    t2=math+phy;
    if((math>=65) && (phy>=55)&&(chem>=50))
    printf("Eligible for the admission");
    else if ((t1>=180)||(t2>=140))
    printf("Eligible for the admission");
    else
    printf("Not Eligible for the admission");
    return 0;
}
