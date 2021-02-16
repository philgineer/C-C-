#include <iostream>

int main() {
    char c;
    double d;
    float f;
    int arr[10];
    int *parr = arr;

    for(int i = 9; i > 0; i--) {
        arr[i] = 28;
    } 
    std::cout << arr[5] << std::endl;

    /* sum from 1 to 10 */
    int sum = 0;
    for (int i = 1; i < 11; i++) {
        sum += i;
    }
    std::cout << "sum: " << sum << std::endl;

    /* number game */
    int num = 28;
    std::cout << "Pick a number" << std::endl;
    int user_input;

    while (1) {
        std::cout << "input: ";
        std::cin >> user_input;
        if (num == user_input) {
            std::cout << "Correct" << std::endl;
            break;
        } else if (num > user_input) {
            std::cout << "Up" << std::endl;
        } else {
            std::cout << "Down" << std::endl;
        }
    }

    return 0;
}