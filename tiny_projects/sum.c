#include <stdio.h>

int main() {
	int sum = 0;
	int n = 1;
	do {
		sum += n;
		n += 1;
	} while (n <= 10);
	printf("%d\n", sum);

	return 0;
}
