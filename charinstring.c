#include<stdio.h>
int main()
{
char a[10];
int len;
printf("Enter the string:\n");
gets(a);
len=strlen(a);
printf("No of characters in string: %d",len);
}
