#include <stdio.h>

int main(void)
{
	int a;		// 4 bytes
	short b;	// 2 bytes
	char c;		// 1 bytes
	double d;	// 8 bytes
	float f;	// 4 bytes

	printf("int : %u\n", sizeof(a));
	printf("short : %u\n", sizeof(b));
	printf("char : %u\n", sizeof(c));
	printf("double : %u\n", sizeof(d));
	printf("float : %u\n", sizeof(f));
	return 0;
}