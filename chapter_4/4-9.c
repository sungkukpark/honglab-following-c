#include <stdio.h>

int main()
{
	float n1 = 3.14;	// 4 bytes
	double n2 = 1.234;	// 8 bytes
	int n3 = 1024;		// 4 bytes

	printf("%d %d %d\n", n1, n2, n3);

	return 0;
}