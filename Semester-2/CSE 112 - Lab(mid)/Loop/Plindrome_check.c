//Palindrome check.
#include <stdio.h>
int main()
{
int n, reverse= 0, remainder,temp ;
printf("Enter an integer: ");
scanf("%d", &n);
temp = n;
// reversed integer is stored in variable
while( n!=0 )
{
remainder = n%10;
reverse= reverse*10 + remainder;
n= n/10;//n/=10
}
// palindrome if orignalInteger and reversedInteger are equal
if (temp == reverse)
printf("%d is a palindrome.", temp);
else
printf("%d is not a palindrome.", temp);
return 0;
}
