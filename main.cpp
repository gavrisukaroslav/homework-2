#include "functions.h"

double powerNumber(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

void funcPolishuk (int a, int b) {
    if (a > b) { std::cout << "Number: " << a << " more than: " << b << std::endl; }
    if (a == b) { std::cout << "Number: " << a << " is equal to: " << b << std::endl; }
    if (a < b) { std::cout << "Number: " << a << " less than: " << b << std::endl; }
}