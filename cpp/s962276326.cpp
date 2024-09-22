#include "stdio.h"
#include <cmath>

int main() {
    double r;
    // double pi=3.1415926;
    scanf("%lf", &r);
    printf("%.6f %.6f\n", r*r*M_PI, 2*r*M_PI);
    return 0;
}

