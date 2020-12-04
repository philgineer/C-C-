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


	/* Pointers to multidimensional arrays */
	
	float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

	float (*pa)[f]; // a single pointer to an array of 2 floats (size: 4)
	float * ap[2];	// an array of two pointers-to-float (size: 4 * 2)

}
