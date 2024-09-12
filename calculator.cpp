/*
* Name: Nathan O'Brien
* Program Name: Calculator App
* Date: 9/12/24
* Extra: Multiplies number1 to the power of number2
*/

#include <iostream>
#include <cmath>
#include <iomanip>
int main(){

    float number1, number2;
    std::cout << "Enter a number: ";
    std::cin >> number1;
    std::cout << "Enter a second number: ";
    std::cin >> number2;

    std::cout << number1 << " + " << number2 << " = " << number1 + number2  << std::endl;
    std::cout << number1 << " - " << number2 << " = " << number1 - number2  << std::endl;
    std::cout << number1 << " * " << number2 << " = " << number1 * number2  << std::endl;
    std::cout << "Division: " << std::fixed << std::setprecision(2) << number1 / number2 << std::endl;
    std::cout << number1 << " Modulo " << number2 << " = " << (int)number1 % (int)number2  << std::endl;
    std::cout << number1 << " Incremented " << " = " << ++number1  << std::endl;
    std::cout << number2 << " Decremented " << " = " << --number2  << std::endl;
    std::cout << number1 << " ^ " << number2 << " = " << pow(number1, number2)  << std::endl;

    return 0;
}