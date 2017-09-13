#include<stdio.h>
#include<conio.h>
int main()
{
int n,t,rem,rev=0;
printf("\nEnter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("\n%d is palindrome",n);
else
printf("%d is not a palindrome",n);
}
return 0;
}
