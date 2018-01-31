#include<stdio.h>
#include<conio.h>
int main()
{
char a[1000];
int count;
int splchar=0;
printf("Enter the string:\n");
gets(a);
if(strlen(a)<=1000)
{
for(count=0;a[count]!=NULL;count++)
{
if((a[count]>='0')&&(a[count]<='9'))
{
}
else if((a[count]>='a'&&(a[count]<='z')||(a[count]>='A'&&a[count]<='Z'))
{ 
}
else if(a[count]==' ')
{
}
else
splchar++;
}
printf("Number of special characters in string:%d\n",splchar);
}
return 0;
}
