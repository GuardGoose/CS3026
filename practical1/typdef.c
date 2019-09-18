#include <stdio.h>

/* typedef states that the alias 'MyDatabase' now represents type
'struct database':
"typedef the 'struct database' as 'MyDatabase'" */

typedef struct database
{
	int id_number;
	int age;
	float salary;
} MyDatabase;

int main()
{
	MyDatabase employee; /* Employee Variable now has modifiable variables inside of it */
	employee.age = 22;
	employee.id_number = 1;
	employee.salary = 12000.21;
}