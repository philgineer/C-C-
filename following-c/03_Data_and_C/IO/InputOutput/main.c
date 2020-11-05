// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	printf("Input two integers\n");

	scanf("%d%d", &i, &j); // &: ampersand: 林家俊 (流立) 立辟

	printf("%d plus %d is %d\n", i, j, i + j);

	return 0;
}