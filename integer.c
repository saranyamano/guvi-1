#include<stdio.h>
#include<conio.h>
int main()
{
int a,count=0;
printf("\nEnter the integer");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
count ++;
}
printf("\nNumber of digits in the integer is %d,count);
return 0;
}
