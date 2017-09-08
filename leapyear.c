#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("\nEnter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("\nEntered year is leap year");
else
{
printf("\nEntered year is not a leap year");
}
}
return 0;
}


