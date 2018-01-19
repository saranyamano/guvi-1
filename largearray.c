#include<stdio.h>
int main()
{
int arr[50],n,i,large;
printf("enter the number of elements in an array");
scanf("%d",&n);
for(i+0;i<n;i++)
{
scanf("%d",&arr[i];
large=arr[i];
for(i=1;i<n;i++)
{
if(large<arr[i])
large=arr[i];
}
printf("largest elament is %d",large);
return 0;
}
}
