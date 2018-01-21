#include<stdio.h>
int main()
{
int i,a[10],n;
printf("enter no of elements in an array\n");
scanf("%d",&n);
printf("enter the elements in an array:\n");
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}
