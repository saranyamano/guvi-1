#include<stdio.h>
int main()
{
int arr[10],i,j,n,temp,median;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the values of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
printf("sorted array is ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
if(n%2==0)
median=((arr[n/2])+(arr[(n/2)+1]))/2;
else
median=arr[(n/2)+1];
for(i=0;i<=n;i++)
{
printf("median is %d",median);
}
}
