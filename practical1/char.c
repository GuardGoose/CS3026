#include <stdio.h>

int main( int argc, char ** argv)
{
	char ch = '\0'; // Initlalise the variable
	int i;
	i = 'a'; // Characters are treated as small integers
	ch = 65; // ch is set to 'A'
	printf("The character %c is %d\n", ch, ch);
	printf("The value of variable i = %d corresponds to character %c\n", i, i);
	/* We can also do arithmatics with charaters */

	char k;
	for(k = 'A'; k<= 'Z'; k++)
		printf("ASCII %d= '%c'\n", k, k);
	// Use another form of for loop
	for(k = 'A'; k<= 'Z'; k++)
		printf("ASCII %d= \'%c\'\n", k, k);

}
