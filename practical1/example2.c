#include <stdio.h>

/* Print a few numbers and illustrate a simple loop */

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < 10; i = i + 1)
		printf("I am printing number %d\n", i);
	return 0;
}