#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	// round-off errors (ex1)
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);

	// round-off errors (ex2)
	float a2 = 0.0f;
	int i;
	for (i = 0; i < 100; i++)
	{
		a2 += 0.01f;
	}
	printf("%f\n", a2); // 결과 1.0 아닌 0.999... 로 나옴. 0.01의 저장값이 0.00999.. 이기 때문.

	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max *= 10.0f;
	printf("%f\n", max);

	// underflow
	float f = 1.401298464e-45F;
	printf("%e\n", f);
	f = f / 10.0f; // subnormal
	printf("%e\n", f);


	float asin = asinf(0.5f); // arcsin
	printf("%e\n", asin); // 0.523598776 (rad) = 30 degree
	
	asin = asinf(2.0f); // sin은 2 값을 가지지 않는다
	printf("%e\n", asin);


	return 0;
}