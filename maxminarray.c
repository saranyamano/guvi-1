#include<stdio.h>
void main()
{
int n,i,j,temp,a[100];
printf("enter the n value\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;i++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d %d",a[0],a[n-1]);
}
