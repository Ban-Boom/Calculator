#include "math_functions.h"
#include <cmath>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return b != 0 ? a / b : 0;
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}
