#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,t;
printf("\n Enter number of terms:");
scanf("%d",&n);
printf("\nFibonacci series");
for(i=1;i<=n;++i)
{
printf("%d\n",t1);
t=t1+t2;
t1=t2;
t2=t;
}
return 0;
}
