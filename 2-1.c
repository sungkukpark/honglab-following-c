#include <stdio.h>	// Preprocessor

int main(void)		// Definition of "main()" function
{					// Start of the scope
	int a;			// Statements
	int b;
	int c;

	a = 1;
	b = 2;
	c = a + b;

	printf("Result is %i", c);

	return 0;		// End of the scope
}