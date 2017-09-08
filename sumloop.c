#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("\nEnter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\nSum of N numbers is %d",sum);
return 0;
}
