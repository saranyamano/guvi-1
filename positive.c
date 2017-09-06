#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter the number:);
scanf("%d",&a);
if(a==0)
{
printf("Entered number is zero");
}
else if(a>0)
{
printf("\nEntered number is positive");
}
else
{
printf("\nEntered number is negative");
}
return 0;
}
