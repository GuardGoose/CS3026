#include <stdio.h>

int main(int argc, char ** argv)
{
	char firstname[20], lastname[20];
	printf("example3a>");
	scanf("%s %s", firstname, lastname);
	printf("Input was: %s, %s\n", lastname, firstname);
	return 0;
}