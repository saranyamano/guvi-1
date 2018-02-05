#include<stdio.h>
int main()
{
int n;
printf("enter the number:\n);
scanf("%d",&n);
if(n%2==0)
{
printf("%d is even",n);
}
else
{
n=n-1;
printf("%d is nearest even",n);
}
return 0;
}
