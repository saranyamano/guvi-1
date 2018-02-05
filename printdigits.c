#include<stdio.h>
int main()
{
int a,b,c,t;
printf("enter a value\n");
scanf("%d",&a);
b=a/100;
c=a%100;
printf("%d ",b);
b=c/10;
t=c%10;
printf("%d %d",b,t);
return 0;
}
