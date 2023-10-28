#include<stdio.h>
void main()
{
	char c;
	scanf_s("%c", &c);
	printf("%c\n", c);
	c = getchar();
	printf("%d", c);
}