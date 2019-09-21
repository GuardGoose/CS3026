#include <stdio.h>

typedef union sameplace
{
	int intVal;
	float floatVal;
	char charVal;
} OneMemory;

int main()
{
	OneMemory allTheSame;
	// We make the assignment

	allTheSame.intVal = 100;

	printf("This is an integer: in Hexadecimal formant %x, as integer %d\n"
		, allTheSame.intVal, allTheSame.intVal );

	printf("This is an float: in Hexadecimal formant %f, as integer %f\n"
		, allTheSame.floatVal, allTheSame.floatVal );

	printf("This is an char: in Hexadecimal formant %x, as integer '%d'\n"
		, allTheSame.charVal, allTheSame.charVal );
}