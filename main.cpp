#include <iostream>
#include "calculator.h"

int main()
{
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Difference: " << subtract(a, b) << std::endl;

    return 0;
}
