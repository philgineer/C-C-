#include <stdio.h>

int main()
{
	int won = 0;
	int dollar = 0;

	printf("Input won\n");
	scanf("%d", &won);

	dollar = won / 1126.5;

	printf("Dollar = %d\n", dollar);

	return 0;
}