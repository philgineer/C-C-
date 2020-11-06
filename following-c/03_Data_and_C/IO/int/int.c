#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;
	long l = 65537L;
	long long ll = 12345678908642LL;

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s); // %hhd에서 overflow
	printf("unsigned int = %u, %d\n", ui, ui); // %d에서 overflow
	printf("long = %ld, %hd\n", l, l); // %hd에서 overflow
	printf("long long = %lld, %ld\n", ll, ll); // %ld에서 overflow


	return 0;
} 