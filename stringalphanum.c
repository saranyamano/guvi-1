#include<stdio.h>
void main()
{
char a[100];
int i,b=0,c=0;
printf("enter the string\n");
for(i=0;i<100;i++)
{
scanf("%s",&a[i]);
}
for(i=0;i<100;i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
b++;
}
if(a[i]>='1'&&a[i]<='9')
{
c++;
}
}
if(b>0&&c>0)
{
printf("the string contains both alphabets and numbers");
}
else
{
printf("the string did not contains both alphabets and numbers");
}
}
