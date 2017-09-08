#include<stdio.h>
#include<conio.h>
int main()
{
int s,i,sum=0;
printf("\nEnter the range");
scanf("%d",&s);
for(i=1;i<=s;i++)
{
sum=sum+i;
}
printf("\nSum of N natural number is %d",sum);
return 0;
}
