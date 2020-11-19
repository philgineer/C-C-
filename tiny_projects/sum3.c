#include <stdio.h>

int sum(int num) {
	int sum = 0;
	for (int i=0; i<=num; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int num = 0, result = 0;
	printf("Sum of 1 to ");
	scanf("%d", &num);
	result = sum(num);
	printf("%d\n", result);

	return 0;
}
