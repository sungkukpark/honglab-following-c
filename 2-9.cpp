#include <stdio.h>
#include <stdbool.h>

void say_hello();	// prototyping, function declaration

int main()
{
	int x, y, z;

	x = 1;
	y = 2;
	z = 3;

	z = x + y;

	say_hello();

	return 0;
}

void say_hello()	// function definition
{
	printf("Hello, World!\n");

	return;
}