#include <stdio.h>

int sum(int num) {
	if (num==1) return 1;
	else return num + sum(num-1);
}

int main() {
	int num=0, result=0;
	printf("Sum of 1 to ");
	scanf("%d", &num);
	result = sum(num);
	printf("%d\n", result);

	return 0;
}
