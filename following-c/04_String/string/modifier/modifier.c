#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	/* 변환 지정자의 수식어들 */
	// 형식 지정자 %[flags][width][.precision][length]specifier
	// printf("%+10.5hi", 256);

	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i % i\n\n", 123, -123);
	
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456); // * = 7

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.6d\n", 1024);
	printf("%06d\n", 1024);
	printf("%.3f\n", 123456.1234567);
	printf("%.3f\n", 123456.1235);
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");
	printf("%.s\n", "ABCDEFGHIJKLMN"); // %0s
	printf("%s\n", "ABCDEFGHIJKLMN");

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257); // %hhd (max 127) overflow
	printf("%d %lld %lld", INT_MAX + 1, INT_MAX + 1, 2147483648LL); // x64에선 정상, x86에선 비정상 출력.

	return 0;
} 