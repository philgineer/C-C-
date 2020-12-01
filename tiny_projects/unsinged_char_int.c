#include <stdio.h>
int main() {
	unsigned int ui;
	unsigned char uc;
	int i;
	char c;

	i = -10;
	c = -10;
	ui = i;
	uc = i;
	printf("ui = i %u\n", ui);
	printf("uc = i %u\n", uc);
	
	ui = c;
	uc = c;
	printf("ui = c %u\n", ui);
	printf("uc = c %u\n", uc);
	}
