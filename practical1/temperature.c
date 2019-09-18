#include <stdio.h>

int main()
{
	double celsius, fahrenheit;

	int number1 = 12345, number2 = 678;
	printf("Hello, number1 is %d\n", number1); // 1 format specifier
	printf("number1=%d, number2=%d. \n",number1, number2);
	printf("number1=%8d, number2=%5d. \n", number1, number2); // Set field-widths
	printf("number1=%08d, number2=%05d. \n", number1, number2); // Pad with zero
	printf("number1=%-8d, number2=%-5d. \n", number1, number2); // Left-align

	printf("Enter the temperature in celsius\n");
	scanf("%lf", &celsius); // use %lf to read a double
	fahrenheit = celsius * 9 / 5.0 + 32.0;
	printf("%.21f degree C is %.21f degree F.\n\n", celsius, fahrenheit );

	printf("Enter the temperature in fahrenheit\n");
	scanf("%lf", &fahrenheit);
	celsius = (fahrenheit -32.0) * 5.0 / 9.0;
	printf("%.21f degree F is %.21f degree C.\n\n", fahrenheit, celsius);	

	return 0;
}	

