#include <stdio.h>

int main() {
	int sum = 0, n = 1;
	while (n <= 10) {
		sum += n;
		n += 1;
	}
	printf("%d\n", sum);

	return 0;
}
