#include <stdio.h>
#include <stdarg.h>

void printNumbers(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	for (int i = 0; i < args; i++)
	{
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	va_end(ap);
	printf("\n");
}

int main()
{
	printNumbers(1, 10);
	printNumbers(2, 10, 30);
	printNumbers(7, 10, 13, 1385135, 3, 31, 3, 34);

	return 0;
}
