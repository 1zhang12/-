#include<stdio.h>
int main()
{
	int i, a, j, x;

	scanf_s("%d", &a);

	i = (a%100)%10;
	j = (a%100-i)/10;
	x = (a-j*10-i)/100;


	
    printf("%d%d%d", i,j,x);

		  
}