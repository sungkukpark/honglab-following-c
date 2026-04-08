/*
* Written by Sungkuk Park
*/
#include <stdio.h>

int main(void)
{
	int x, y, sum;	// variables

	x = 3;
	y = 2;

	sum = x + y;		// add two variables
	printf("%i + %i = %i\n", x, y, x + y);

	// Sound alarm
	printf("\a");

	return 0;
}