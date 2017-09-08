#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nEnter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\na is the largest number",a);
}
else if((b>a)&&(b>c))
{
printf("\nb is the largest number",b);
}
else((c>a)&&(c>b))
{
printf("\nc is the largest number",c);
}
return 0;
}

