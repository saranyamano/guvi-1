#include<stdio.h>
int main()
{
int arr[10],n,i,small;
printf("enter the number of elements in an array");
scanf("%d",&n);
for(i+0;i<n;i++)
{
scanf("%d",&arr[i];
small=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<small)
small=arr[i];
}
printf("smallest elament is %d",small);
return 0;
}
}
