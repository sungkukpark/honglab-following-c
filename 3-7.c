#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3'000'000'000U; // 3'000'000'000U
	long l = 65537L;
	long long ll = 12'345'678'908'642LL; // 12'345'678'908'642ll

	// U, L, LL can be omitted.

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("unsigned int = %u, %d (%d)\n", ui, ui);
	printf("long = %ld, %hd\n", l, l);
	printf("long long = %lld, %ld\n", ll, ll);
}