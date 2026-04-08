#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = 0;
	//int sum = 0;

	//printf("Input two integers: ");
	//scanf("%d%d", &a, &b);

	//sum = a + b;

	//printf("%d + %d = %d\n", a, b, sum);

	float won = 0;
	float dollar = 0;

	printf("Input won: ");
	scanf("%f", &won);

	dollar = won * 0.00089f;
	printf("Dollar = %f\n", dollar);
	return 0;
}