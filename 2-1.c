#include <stdio.h>	// Preprocessor

int main(void)		// Definition of "main()" function
{					// Beginning of the scope
	int a;			// Statements
	int b;			// Declaration of variables
	int c;

	a = 1;			// Assignment of values
	b = 2;
	c = a + b;		// Assignment of the result from an operation

	printf("Result is %i", c);

	return 0;		// End of the scope
}