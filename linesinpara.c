#include<stdio.h>
void main()
{
char a[10];
int count=0;flag=1;
printf("enter the string\n);
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
flag=++count;
}
printf("No of lines in paragraph : %d",flag);
}
}
