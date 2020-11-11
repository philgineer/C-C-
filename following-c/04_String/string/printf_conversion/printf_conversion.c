#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	// printf() 함수의 변환 지정자(conversion specifiers)
	// "%d" : 형식(format) 지정자.
	// 어떤 형식으로 출력할지: 변환 지정자
	// %[flags][width][.precision][length]specifier

	double d = 3.14159265358979323846264338327950288419716939937510f; // 8byte 까지만 저장됨.

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // overflow
	printf("%u %u %u\n", 1024, -1, UINT_MAX); // underflow

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	// %g,G 사용시 %f or %e 중 자동으로 결정 
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);	
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9); // 8진수
	printf("%p\n", &d); // pointer-of operator

	printf("\n");
	printf("%x %X\n", 11, 11); // 16진수
	printf("%%\n", d); // warning. d is ignored.

	printf("\n");
	printf("%9d\n", 12345); // %숫자: 자릿수 맞춤
	printf("%09d\n", 12345);
	printf("%9d\n", 12345);
	printf("%.2f\n", 3.141592f); // 소숫점 수
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed); // 9글자

	return 0;
} 