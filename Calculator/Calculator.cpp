#include <iostream>
#include "math_functions.h"

int main() {
    double num1, num2;
    int operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Choose an operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - power): ";
    std::cin >> operation;

    double result;

    switch (operation) {
    case 1:
        result = add(num1, num2);
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
        break;
    case 2:
        result = subtract(num1, num2);
        std::cout << num1 << " - " << num2 << " = " << result << std::endl;
        break;
    case 3:
        result = multiply(num1, num2);
        std::cout << num1 << " * " << num2 << " = " << result << std::endl;
        break;
    case 4:
        if (num2 == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
        }
        else {
            result = divide(num1, num2);
            std::cout << num1 << " / " << num2 << " = " << result << std::endl;
        }
        break;
    case 5:
        result = power(num1, num2);
        std::cout << num1 << " raised to the power of " << num2 << " = " << result << std::endl;
        break;
    default:
        std::cout << "Invalid operation selected." << std::endl;
    }

    return 0;
}
