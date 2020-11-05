#include <stdio.h>

void say_hello(void); // prototyping, function declaration.

int main()
{
	// 무조건 main 함수부터 실행된다.

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
	int x = 10; // 지역 변수기 때문에, main 함수의 x와 무관함.

	// void: 받을 파라미터가 없음.
	printf("Hello, World!\n");
}