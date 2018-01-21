#include <stdio.h>

void main()
{
    char a[20];
    int count = 0, i;
 
    printf("enter the string\n");
    gets(a);
    for (i = 0;a[i];i++)
    {
        if (a[i] == ' ')
            count++;    
    }
    printf("number of blank spaces in given string are: %d\n", count);
}
