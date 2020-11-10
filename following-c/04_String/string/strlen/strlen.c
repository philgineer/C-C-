#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen and more

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";

	printf("%zu %zu\n", sizeof(str1), strlen(str1));
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));
	printf("%zu %zu\n", sizeof(str4), strlen(str4));

	/* size_t 는 시스템에 따라 달라질 수 있는 자료형입니다. (강의 3:50~)
	만약 어떤 시스템에서 sizeof 의 return 해주는 값이 unsigned long 이라면, % u 만으로는 제대로된 출력을 기대하기 힘듭니다.
		이 때% zu를 사용하여 코딩을 해놓으면 따로 바꾸어줄 필요가 없으므로 이식성이 높아집니다.*/


	/* 동적할당 */
	char* str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
	str5[5] = '\0';

	printf("%zu %zu\n", sizeof(str5), strlen(str5));
	// sizeof(str5) = 4byte : 포인터 변수 자체의 size.

	return 0;
} 