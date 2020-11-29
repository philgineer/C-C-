#include <stdio.h>

int main()
{
	/* Two of 1D arrays */

	int arr1[3] = {1, 2, 3};
	int arr2[3] = {4, 5, 6};

	int * parr[2] = {arr1, arr2};

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d(==%d) ", parr[j][i], *(parr[j] + i));
		printf("\n");
	}
	printf("\n");


	/* Arrays of pointers works like a 2D array */

	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	
	int * parr2[2] = {arr[0], arr[1]};

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d %d %d %d\n", \
			arr[j][i], parr2[j][i], *(parr2[j] + i), *(*(parr + j) + i));
		printf("\n");
	}
	printf("\n");

}
