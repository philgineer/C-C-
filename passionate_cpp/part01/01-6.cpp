#include <iostream>

typedef struct {
	int id;
	int balance;
	char name[20];
} Account;

Account arr[100];
int i = 0;
int error = 0;

int isValidNumber(char str[]) {
	int j = 0;
	while (str[j]) {
		if (std::isdigit(str[j]) == 0) {
			return 0;
		}
		j++;
	}
	return 1;
}

int validInput() {
	char temp[20];
	std::cin >> temp;
	if (isValidNumber(temp)) {
		return std::atoi(temp);
	}
	return -1;
}

void printMenu() {
	std::cout << "------------Bank App------------" << std::endl;
	std::cout << "1. Create account" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Print all accounts" << std::endl;
	std::cout << "5. Exit" << std::endl;
}

void createAccount() {
	int temp;
	if (i > 99) {
		std::cout << "\n! Account list is full.\n" << std::endl;
		error = 1;
		return ;
	}
	std::cout << "Account ID: ";
	temp = validInput();
	if (temp == -1) {
		std::cout << "\n! Invaid input.\n\n";
	} else {
		arr[i].id = temp;
		arr[i].balance = 0;
		std::cout << "Name: ";
		std::cin >> arr[i].name;
	i++;
	}
}

void deposit() {
	int d_id;
	int d_amount;
	std::cout << "[Deposit]" << std::endl;
	std::cout << "Account ID: ";
	d_id = validInput();
	if (d_id == -1) {
		std::cout <<" \n! Invaid input.\n";
		return;
	}
	std::cout << "Amount: ";
	d_amount = validInput();
	if (d_amount == -1) {
		std::cout <<" \n! Invaid input.\n";
		return;
	}
	for (int k = 0; k < i + 1; k++) {
		if (arr[k].id == d_id) {
			arr[k].balance += d_amount;
			std::cout << "\nSucceed.\n";
			return ;
		}
	}
	std::cout << "\n! ID not found.\n\n";
}

void withdraw() {
	int w_id;
	int w_amount;
	std::cout << "[Withdraw]" << std::endl;
	std::cout << "Account ID: ";
	w_id = validInput();
	if (w_id == -1) {
		std::cout <<" \n! Invaid input.\n";
		return;
	}
	std::cout << "Amount: ";
	w_amount = validInput();
	if (w_amount == -1) {
		std::cout <<" \n! Invaid input.\n";
		return;
	}
	for (int k = 0; k < i + 1; k++) {
		if (arr[k].id == w_id) {
			arr[k].balance -= w_amount;
			std::cout << "\nSucceed.\n";
			return ;
		}
	}
	std::cout << "\n! ID not found.\n\n";
}

void printAccount() {
	std::cout << "------------Accounts------------" << std::endl;
	for (int j = 0; j < i; j++) {
		std::cout << "Account ID: " << arr[j].id << std::endl;
		std::cout << "Name: " << arr[j].name << std::endl;
		std::cout << "Balance: " << arr[j].balance << std::endl;
		std::cout << "--------------------------------" << std::endl;
	}
}

int main() {
	char choice = '0';
	while (choice != '5') {
		choice = '0';
		if (error == 1) {
			std::cout << "! Error 1 occurred.\n\n";
			return 1;
		}
		printMenu();
		std::cout << ">> Select: ";
		std::cin >> choice;
		switch (choice)
		{
			case '1':
				createAccount();
				break;
			case '2':
				deposit();
				break;
			case '3':
				withdraw();
				break;
			case '4':
				printAccount();
				break;
			case '5':
				return 0;
			default:
				std::cout << "\n! Unknown input.\n" << std::endl;
		}
	}
}
