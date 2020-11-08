#include <stdio.h>
#include <float.h>

int main()
{
	/*
	 m * 10^n
	 m: significand, n: exponent, 10: base
	 유효숫자(significant num) 5개: 1.2345 * 10^2
	 유효숫자 6개: 1.23450 * 10^2
	 Normalized significand: 1.xxx * 2^x

	 4byte (32bit) float:
	 sign 1, exponent 8, fraction 23 (bits)
	 fraction: significand 중 소수점 아래 부분
	
	4byte int 범위: -2.14*10^9 ~ 2.14*10^9
	4byte float 범위: -3.4*10^38 ~ 3.4*10^38 (10진수 유효숫자 6개. 즉 정밀도로 보장할 수 있는 자릿수가 줄어든다.)
	*/

	printf("%u\n", sizeof(float)); // 4
	printf("%u\n", sizeof(double)); // 8
	printf("%u\n", sizeof(long double)); // (MS사) VS 컴파일러는 8, gcc (VS code 등에서) 는 12 할당.

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456; // warning: truncation from double to float
	double d2 = 123.456f;

	int i = 3;
	float f3 = 3.f; // 3.0f
	double d3 = 3.; // 3.0

	float f4 = 1.234E10f; // e로 표기 가능
	float f5 = 0xb.aP1; // 16진수에서는 E가 숫자기 때문에 P로 표기
	double d5 = 1.0625e0;

	printf("%f %f %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5); // 16진수로 출력
	printf("%a %A\n", d5, d5);

	return 0;
}