/* Factorization in Prime numbers, 소인수분해 */

#include <stdio.h>

void	print_prime(int num, int *arr, int count) {
	if (count == 1) 
		printf("%d is prime.\n", num);
	else {
		for (int i = 0; i < count - 1; i++) {
			printf("%d x ", arr[i]);
		}
		printf("%d\n", arr[count - 1]);
	}
}

void	factorize_prime(int num) {
	int arr[num];
	int count = 0;
	const int original_num = num;

	while (num != 1) {
		for (int i = 2; i <= num; i++) {
			if (num % i == 0) {
				arr[count] = i;
				count++;
				num = num/i;
				break; // same i value again
			}
		}
	}
	print_prime(original_num, arr, count);
}

int		main() {
	int num = 0;

	printf("Input number: ");
	scanf("%d", &num);
	if (num > 0) {
		factorize_prime(num);
		return 0;
	}
	else {
		printf("Not a natural number\n");
		return 1;
	}
}
