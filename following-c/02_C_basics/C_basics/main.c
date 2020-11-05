#include <stdio.h>

void say_hello(void); // prototyping, function declaration.

int main()
{
	// ������ main �Լ����� ����ȴ�.

	say_hello();

	// declaration & assignment
	int x = 1, y = 2;
	int sum;

	sum = x + y;

	// print formatted

	printf("The truth is... \nI am \"Ironman.\"\n");
	// escape sequence

	printf("%i + %i = %i", x, y, sum);
	// printf("\a"); // alarm output


	return 0;
}

void say_hello(void) // function definition
{
	int x = 10; // ���� ������ ������, main �Լ��� x�� ������.

	// void: ���� �Ķ���Ͱ� ����.
	printf("Hello, World!\n");
}