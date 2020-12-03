#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	/*
	   1. r: repeat		| ./a.out r hello 3
	   2. s: sum		| ./a.out 25 7

	   string to int, double, long: atoi, atof, atol
	*/

	if (argc < 3)
		printf("Wrong usage of %s\n", argv[0]);
	else if (argv[1][0] == 'r')
	{
		printf("Repeating %s x %s times.\n", argv[2], argv[3]);
		int times = atoi(argv[3]);

		for (int i = 0; i < times; i++)
			puts(argv[2]);
	}
	else if (argv[1][0] == 's')
		printf("Sum of %s and %s is [ %d ]\n", argv[2], argv[3], \
				atoi(argv[2]) + atoi(argv[3]));
	else
		return 0;
}
