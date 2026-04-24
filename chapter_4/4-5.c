#include <stdio.h>

// 기호적 상수
#define PI 3.141592f
#define AI_NAME "Jarvis"

int main()
{
	float radius, area, circumference;

	printf("I'm %s.\n", AI_NAME);
	printf("Please enter the radius of the circle.\n");

	printf("Input radius: \n");
	scanf("%f", &radius);

	area = PI * radius * radius;	// 원의 넓이: area = π * r²
	circumference = 2 * PI * radius; // 원의 둘레: 2 * π * r
	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circumference);

	// TODO: extra, sphere
	// sphere area: 4 * π * r²
	// sphere volume: (4/3) * π * r³

	// TODO: wrong usage, strings, const
	return 0;
}