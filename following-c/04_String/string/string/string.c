#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char fruit_name; // stores one character
	printf("What is your favorite fruit?\n");
	scanf("%c", &fruit_name);
	printf("You like %c\n\n", fruit_name);

	char fruit_name2[40]; // 1byte * 40개. fruit_name2 가 배열의 주소를 의미하게 됨.
	printf("What is your favorite fruit?\n");
	scanf("%s", fruit_name2); // without &
	printf("You like %s\n", fruit_name2);

	return 0;
} 