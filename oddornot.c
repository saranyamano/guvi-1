#include<stdio.h>
#include<conio.h>
int main()
{
int first,last,i;
printf("enter the first interval");
scanf("%d",&first);
printf("Enter the second interval");
scanf("%d",&last);
for(i=first;i<=last;i++)
{
if(i%2==1)
{
printf("%d is an odd number",i);
}
}
return 0;
}
