#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
	unsigned int i = 0;
	unsigned long int j = 0;

	printf("%u\n", sizeof(i));
	printf("sizeof(unsigned int) = %u\n", sizeof(unsigned int));

	// 0b: 2진수 직접 입력
	// unsigned int의 크기 = 4byte = 32bit
	i = 0b11111111111111111111111111111111;
	j = pow(2, 32) - 1;

	printf("%u\n2 ^ 32 - 1 = %lu\n", i, j);

	unsigned int unsigned_max = UINT_MAX;
	unsigned int unsigned_min = 0;
	signed int int_max = INT_MAX;
	signed int int_min = INT_MIN;

	printf("Max of uint = %u\nMin of uint = %d\n", unsigned_max, unsigned_min);
	printf("Max of int = %u\nMin of int = %d\n", int_max, int_min);

	// overflow
	unsigned int u = UINT_MAX; // + 1;

	// i to binary representation
	char buffer[33];
	_itoa(u, buffer, 2);

	//print decimal and binary
	printf("decimal: UINT_MAX + 1 = %u\n", u);
	printf("binary: %s\n", buffer);

	// 1111 + 1 = 0000
	// 0000 - 1 = 1111

	return 0;
}