#include<stdio.h>
int main()
{
int n,i,a[10],t;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
t=n/2;
printf("%d",a[t]);
return 0;
}
