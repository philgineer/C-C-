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
%d: 10����(������) decimal
%f: �Ǽ��� floating-point
%e: ������ exponential
%o: 8���� octal
%x: 16���� hexadecimal
%u: ��ȣ���� 10���� unsigned
%g: �Ǽ��� �ڵ����
%p: �������� �ּ�
%c: �ϳ��� ���ڷ� ��� character
%s: ���ڿ� string
*/