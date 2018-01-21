#include<stdio.h>
int main()
{
int hr,min;
printf("Enter the value of n\n");
scanf(%d",&n);
if(n<60)
{
printf("Time :%d\n",n);
}
else
{
hr=n/60;
min=n%60;
printf("time :%d:%d",hr,min);
}
}
