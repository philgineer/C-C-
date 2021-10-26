#include <iostream>

int main() {
	// 문제 1
	int num[5];
	int res;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> num[i];
		res += num[i];
	}
	std::cout << "합계: " << res << std::endl;

	// 문제 4
	int salary, sales;

	while (sales != -1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sales;
		if (sales != -1)
			std::cout << "이번 달 급여: " << 50 + sales * 0.12 << "만원\n";
	}
	std::cout << "프로그램을 종료합니다\n";
}
