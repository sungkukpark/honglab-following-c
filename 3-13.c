#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("%u\n", sizeof(_Bool));	// "_Bool" is C99 type, so it is not supported in C++ (1 byte)

	_Bool b1;
	b1 = 0;		// false
	b1 = 1;		// true

	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);
	return 0;
}