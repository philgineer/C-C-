#include <iostream>

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char* a, char* b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}



int main() {
	int num1=20, num2=30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;

	char ch1='A', ch2='Z';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;

	return 0;
}
