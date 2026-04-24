#include <stdio.h>
#include <limits.h>  // for INT_MAX, ..., etc.
#include <float.h>   // for FLT_MAX, ..., etc.

#define PI 3.141592f

int main()
{
	printf("PI is %f\n", PI);
	printf("Biggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);

	return 0;
}