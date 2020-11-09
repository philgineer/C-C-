#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc(): memory allocation

//struct MyStruct
//{
//	int i;
//	float f;
//};

int main()
{
	/* 1. sizeof operator basic types */

	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a); // unsigned int 자료형이 아닐 경우를 대비해 이식성 높인 경우. (portable type)
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1);
	printf("Size of int type is %zu bytes.\n", int_size4);
	printf("Size of float type is %zu bytes.\n\n", float_size);
	
	/* 2. sizeof arrays */

	int int_arr[30]; // int_arr[0] = 1024;
	int *int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30); // int_ptr[0] = 1024;

	printf("Size of array = %zu bytes\n", sizeof(int_arr)); // 4 byte * 30


	return 0;
} 