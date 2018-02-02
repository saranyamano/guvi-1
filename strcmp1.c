#include <stdio.h>

int main() {
	char a[10];
	char b[10];
	printf("enter the string 1\n");
	scanf("%s",&a);
	printf("enter the string 2\n");
	scanf("%s",&b);
	printf("the concatenated strings are:%s %s",a,b);
	return 0;
}
