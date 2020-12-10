#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Well aligned structure */

	struct Aligned
	{
		int		a;
		float	b;
		double	c;
	};

	/*
	    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	   | int a |float b|       double c      |
	*/

	struct Aligned a1, a2;

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned));
	printf("%lld\n", (long long)&a1);
	printf("%lld a\n", (long long)&a1.a);
	printf("%lld b\n", (long long)&a1.b);
	printf("%lld c\n", (long long)&a1.c);
	
	printf("\nstruct Aligned a2\n");
	printf("Sizeof %zd\n", sizeof(a2));
	printf("%lld\n", (long long)&a2);
	printf("%lld a\n", (long long)&a2.a);
	printf("%lld b\n", (long long)&a2.b);
	printf("%lld c\n", (long long)&a2.c);


	/*
	   Padding (struct member alignment)
		- 1 word: 4 bytes (in x86)
		- 최소 데이터 이동 단위인 1 워드에 한 번에 실어 보내기 위해 패딩.
	*/

	struct Padded1
	{
		char	a;
		float	b;
		double	c;
	};

	/*
	   Without padding
	    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	   |a|float b|      double      | ???

	   With padding
	    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	   |a    pad |float b|      double       |
	*/

	struct Padded1 p1;

	printf("\nstruct Padded1 p1\n");
	printf("Sizeof %zd\n", sizeof(p1));
	printf("%lld\n", (long long)&p1);
	printf("%lld a | char -> 4 bytes (padded)\n", (long long)&p1.a);
	printf("%lld b\n", (long long)&p1.b);
	printf("%lld c\n", (long long)&p1.c);


	struct Padded2
	{
		float	a;
		double	b;
		char	c;
	};

	/*
	    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23
	   |    float a    |     double b        |          char c       |
	*/
	struct Padded2 p2;

	printf("\nstruct Padded1 p2\n");
	printf("Sizeof %zd\n", sizeof(p2));
	printf("%lld\n", (long long)&p2);
	printf("%lld a | float -> 8 bytes (padded)\n", (long long)&p2.a);
	printf("%lld b\n", (long long)&p2.b);
	printf("%lld c | char -> 8 bytes (padded)\n", (long long)&p2.c);
}
