#include<stdio.h>
#include<conio.h>
void main()
{
char al;
printf("\nEnter the character:");
scanf("%c",&al);
if(((al>=65)&&(al<=90))||((al>=97)&&(al<=122)))
{
printf("\nEntered character is an alphabet");
else
printf("\nEntered character is not an alphabet");
}
getch();
}
