#include <stdio.h>
#include <float.h>

int main(void)
{
	// round-off errors (ex1); 반올림 아님
	float a, b;
	a = 1.0E20f + 1.0f;	// 앞의 수가 너무 크기 때문에
	b = a - 1.0E20f;	// 뒤의 숫자가 연산 뒤에 사라지는 문제
	printf("%f\n", b);

	// round-off errors (ex2); 반올림 아님
	a = 0.0f;
	for (int i = 0; i < 100; ++i)
	{
		a += 0.01f;		// 실수 연산의 오차 누적이 반복되면 최종 결과값의 오차가 커질 수 있음
	}
	printf("%f\n", a);

	// overflow
	//double max = FLT_MAX;
	double max = DBL_MAX;
	printf("%f\n", max);

	max = max * 100.0f;
	printf("%f\n", max);

	// underflow
	float f = FLT_TRUE_MIN;
	printf("%e\n", f);

	f = f / 2.0f;			// subnormal
	printf("%e\n", f);

	return 0;
}