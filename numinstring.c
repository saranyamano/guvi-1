#include<stdio.h>
int main()
{
char s[100];
int i,c=0;
printf("enter the string\n");
gets(s);
for(i=0;s[i];i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
c++;
{
printf("The number of numeric characters :\n",c);
}
  return 0;
}
}
