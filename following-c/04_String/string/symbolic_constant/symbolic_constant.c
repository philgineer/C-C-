#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f // 명백한(manifest) 상수, 기호적(symbolic) 상수

int main()
{
	// const float pi = 3.141592f;

	float radius, area, circum;

	printf("Input radius\n");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0f * PI * radius;
	
	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;
} 