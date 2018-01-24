#include<stdio.h>
int main()
{
	int a[150],i,n=4,j,flag;
printf("enter the values\n");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{ 
		if(a[i]>a[j])
		{
	    flag=a[i];
	    a[i]=a[j];
	   a[j]= flag;
	}
	}
	}
printf("sorted array is\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}
