#include<stdio.h>
void main()
{
int a,b,temp;
printf("before swapping:\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swapping:%d %d\n",a,b);
}
