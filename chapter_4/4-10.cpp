#include <stdio.h>
#include <inttypes.h>	// intmax_t

int main()
{
	/* 1. multiple inputs with blank separators */
	//int i;
	//float f;
	//char str[30];

	//scanf("%d %f %s", &i, &f, str);	// NOTE: % is absent in the format string
	//printf("i = %d, f = %f, str = %s\n", i, f, str);

	/* 2. character input */
	//char c;
	//scanf("%c", &c);
	//printf("%i\n", c);

	/* 3. unsigned as signed */
	//unsigned i;
	//scanf("%i", &i);
	//printf("%i\n", i);

	/* 3. unsigned as signed */
	//unsigned i2;
	//scanf("%u", &i2);
	//printf("%u\n", i2);

	// 4. floating point numbers
	//double d = 0.0;
	//scanf("%lf", &d);	// lf, try E notation
	//printf("%f\n", d);

	// 5. width
	//char str[30];
	//scanf("%5s", str);
	//printf("%s\n", str);

	// 6. h modifier
	//char i;
	//scanf("%hhd", &i);		// Try large numbers like 128, 255, 256, -1, -128, -129
	//printf("%i\n", i);

	// 7. integer with characters
	//int i;
	//scanf("%dabc", &i);	// Try input like 123abc, 123ab, 123a, 123, abc123
	//printf("%i\n", i);

	return 0;
}