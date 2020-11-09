#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

int main()
{
	// 1. bool
	printf("%u\n", sizeof(_Bool)); // 1byte: 메모리에서 주소를 배정받을 수 있는 최소 단위가 1바이트이기 때문. (정보는 1비트와 같지만)

	_Bool b1, b2;
	b1 = 0; // false
	b2 = 1; // true

	printf("%d %d\n", b1, b2);

	// #include <stdbool.h> 후에 사용 가능.
	bool b3, b4;
	b3 = true;
	b4 = false;

	printf("%d %d\n", b3, b4);


	// 2. complex (run with gcc & VScode)

	double _Complex z = 1 + 2*I;

	z = 1 / z;

	printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));




	return 0;
}