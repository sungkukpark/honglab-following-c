#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv)
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777;
	unsigned int hex = 0xffffffff;

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("\n");
	printf("%o\n%x\n%#o\n%#x\n%#X\n", decimal, decimal, decimal, decimal, decimal);

	return 0;
}