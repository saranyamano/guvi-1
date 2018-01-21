#include<stdio.h>
int main()
{
int hr,min,hr1,hr2,min1,min2;
printf("enter the 1st time\n");
scanf("%d:%d",&hr1,&min1);
printf("enter the 2nd time\n");
scanf("%d:%d",&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("subration of time 1 and 2 is %d:%d",hr,min);
return 0;
}
