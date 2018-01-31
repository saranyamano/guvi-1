#include<stdio.h>
int main()
{
char a[10];
int i,n;
printf("enter the string\n");
scanf("%s",&a);
printf("enter the n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%s\n",a);
}
return 0;
}
