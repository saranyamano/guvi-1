#include<stdio.h>
int main()
{
int a[105],i,j,n,temp;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the values of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("sorted array is ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
}
