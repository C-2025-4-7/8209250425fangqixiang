#include "mytriangle.h"
#include <cmath>
bool is_valid(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}