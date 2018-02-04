#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter the number\n");
scanf("%d",&n);
if(n<=10000000000)
{
while(n>0)
{
n=n/10;
count++;
}
printf("Number of digits in the given number is %d",count);
}
return 0;
}
