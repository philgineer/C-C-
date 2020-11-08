#include <stdio.h>

int main()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777; // 0~ : 8진수
	unsigned int hex = 0xffffffff; // 16진수

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("8진수: %o, %#o\n16진수: %x, %#x, %#X\n", decimal, decimal, decimal, decimal, decimal);

	return 0;
} 