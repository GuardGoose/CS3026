#include <stdio.h>
#include <string.h>

struct  name {
	char firstname[32];
	char lastname[32];
} MyName;

typedef union nbuffer 
{
	char nameBuffer[256];
	MyName myName;
} NameMemory;

int main()
{
	NameMemory allTheSame;
	// Initalise the buffer
	int i = 0;
	for( i = 0; i < 256; i++) allTheSame.nameBuffer[i] = '\0';
		// make the assignment
		strcpy(allTheSame.MyName.firstname, "Justin");
		strcpy(allTheSame.MyName.lastname, "Szabo");
		printf("Buffer content = %s\n", allTheSame.nameBuffer);
		// Print the buffer in its completeness
		printf("nameBuffer = ");
		for (i = 0; i < 256; i++)
			printf("%c", allTheSame.nameBuffer[i]);
		printf("\n");
}