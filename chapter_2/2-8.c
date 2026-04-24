#include <stdio.h>
#include <stdbool.h>

void say_hello();	// prototyping, function declaration

int main()
{
	int i = 0;
	i = 1;

	//int if;
	//int for;

	//int printf = 0;
	//printf("hello, world!");

	//int bool;

	//int bool = 2;

	say_hello();
	say_hello();
	say_hello();
	say_hello();
	say_hello();
	say_hello();

	return 0;
}

void say_hello()	// function definition
{
	printf("Hello, World!\n");

	return;
}