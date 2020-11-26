#include <stdio.h>

void print_binary(unsigned long n);

int main()
{
	unsigned long num = 19;

	print_binary(num);
	printf("\n");

	return 0;
}

void print_binary(unsigned long num)
{
	int remainder = num % 2;
	if (num >= 2)
		print_binary(num / 2);
		
	printf("%d", remainder);

	return;
}
