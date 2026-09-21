#include "functions.h"

double powerNumber(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;

double KrylovFunction(double x) {
    return x + 1.0; 
}


