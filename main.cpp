#include <cmath>

double postolskiyFunction(double x) {
    return (x * x - 4.0 * x + 7.0) / (std::abs(x) + 1.0);
}