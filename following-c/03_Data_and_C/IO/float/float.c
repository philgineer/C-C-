#include <stdio.h>
#include <float.h>

int main()
{
	/*
	 m * 10^n
	 m: significand, n: exponent, 10: base
	 ��ȿ����(significant num) 5��: 1.2345 * 10^2
	 ��ȿ���� 6��: 1.23450 * 10^2
	 Normalized significand: 1.xxx * 2^x

	 4byte (32bit) float:
	 sign 1, exponent 8, fraction 23 (bits)
	 fraction: significand �� �Ҽ��� �Ʒ� �κ�
	
	4byte int ����: -2.14*10^9 ~ 2.14*10^9
	4byte float ����: -3.4*10^38 ~ 3.4*10^38 (10���� ��ȿ���� 6��. �� ���е��� ������ �� �ִ� �ڸ����� �پ���.)
	*/

	printf("%u\n", sizeof(float)); // 4
	printf("%u\n", sizeof(double)); // 8
	printf("%u\n", sizeof(long double)); // (MS��) VS �����Ϸ��� 8, gcc (VS code ���) �� 12 �Ҵ�.

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456; // warning: truncation from double to float
	double d2 = 123.456f;

	int i = 3;
	float f3 = 3.f; // 3.0f
	double d3 = 3.; // 3.0

	float f4 = 1.234E10f; // e�� ǥ�� ����
	float f5 = 0xb.aP1; // 16���������� E�� ���ڱ� ������ P�� ǥ��
	double d5 = 1.0625e0;

	printf("%f %f %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5); // 16������ ���
	printf("%a %A\n", d5, d5);

	return 0;
}