#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65;

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	char c2 = '*'; // asterisk
	
	printf("%c %hhd\n", c2, c2);

	printf("%c %hhd\n", c+1, c+1);


	float salary;
	//printf("$______");
	//printf("$______\b\b\b\b\b\b"); // backspace
	//scanf("%f", &salary);

	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"HELLO\" \?\n");

	return 0;
}