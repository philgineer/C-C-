#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

	char c = 'a';
	char str1[10] = "Hello"; // 자동으로 컴파일러가 끝에 붙이는 '\0' 만나면 더 이상 출력하지 않고 넘김
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[9]);

	char str3[15] = "Hello,\0 World";
	
	printf("%s\n", str3);
	printf("%c\n", str3[8]);

	return 0;
} 