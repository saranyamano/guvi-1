#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nEnter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\n%d is the largest number",a);
}
else if((b>a)&&(b>c))
{
printf("\n%d is the largest number",b);
}
else((c>a)&&(c>b))
{
printf("\n%d is the largest number",c);
}
return 0;
}
