#include <stdio.h>

void my_func(int z)
{
	printf("%i", z);
}

int main() {
	int x = 0, y = 1;
	int z = 0;

	z = x + y;
	my_func(z);

	return 0;
}