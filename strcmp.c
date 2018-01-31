#include<stdio.h>
int main()
{
char a[10],b[10];
printf("enter the first string:\n");
scanf("%s",&a);
printf("enter the secong string:\n");
scanf("%s",&b);
m=strlen(a);
n=strlen(b);
if(m>n)
{
printf("%s",a);
}
else if(m<n)
{
printf("%s",b);
}
else
{
printf("%s",a);
}
return 0;
}
