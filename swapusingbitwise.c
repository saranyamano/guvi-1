include<stdio.h>
int main()
{
int a=10,b=20;
printf("the values of a and b %d %d\n",a,b);
a=a^b;
b=a^b;
a=a^b
printf("the swapped values are %d %d\n",a,b);
return 0;
}
