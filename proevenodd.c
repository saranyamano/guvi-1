#include<stdio.h>
void main()
{
int n,m,product;
printf("enter the value of n and m:\n");
scanf("%d %d",&n,&m);
product=n*m;
if(product%2==0)
{
printf("product is even\n");
}
else
{
printf("product is odd");
}
}
