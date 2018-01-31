#include<stdio.h>
int main()
{
int i,j,temp,a[100],maxi;
printf("enter the numbers in array:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<10;i++)
{
maxi=a[0];
}
printf("maximum among 10 numbers are %d",maxi);
return 0;
}
