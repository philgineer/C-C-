#include <stdio.h>
#include <unistd.h>

int main() {
	setbuf(stdout, NULL);
	int cd = 10;
	while (cd > 0) {
		sleep(1);
		printf("%d >> ", cd);
		cd -= 1;
	}
	sleep(1);
	printf("%d\n", cd);
}
