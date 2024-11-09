#include "head.h"
#include <iostream>

int main()
{
    double a = 10.00;
    double b = 2.5;

    std::cout << "a = " << a << " b = " << b << std::endl
              << "a + b = " << add(a, b) << std::endl
              << "a - b = " << mult(a, b) << std::endl
              << "a * b = " << sub(a, b) << std::endl
              << "a / b = " << div(a, b) << std::endl;
    return 0;

}