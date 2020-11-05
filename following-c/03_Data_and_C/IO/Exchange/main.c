#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int won = 0;
	float dollar = 0;

	printf("Input won\n");
	scanf("%d", &won);

	dollar = won / 1126.5;

	printf("Dollar = %f\n", dollar);

	return 0;
}

/*
%d: 10진수(정수형) decimal
%f: 실수형 floating-point
%e: 지수형 exponential
%o: 8진수 octal
%x: 16진수 hexadecimal
%u: 부호없는 10진수 unsigned
%g: 실수형 자동출력
%p: 포인터의 주소
%c: 하나의 문자로 출력 character
%s: 문자열 string
*/