#include <stdio.h>

int mult(int, int);

int main()
{
	int x, y;

	printf("Please input 2 numbers to be multiplied:\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("The product of your two numbers is %d\n", mult(x, y));
	getchar();
}

int mult(int x, int y)
{
	return x * y;
}