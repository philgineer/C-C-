#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <inttypes.h>

int main()
{
	// scanf 에서 *의 의미는 "무시"
	
	/* multiple inputs with blank separators */
	int i;
	float f;
	char str[30];
	scanf("%d %f %s", &i, &f, str); // not %str
	printf("%d %f %s\n", i, f, str);


	printf("");

	return 0;
} 