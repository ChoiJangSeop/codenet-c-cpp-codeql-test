#include <stdio.h>
#define pi 3.1415926535897323

int main() {
    float r;
    double s,l;
    scanf_s("%f", &r);
    s = r*r*pi;
    l = 2 * pi*r;
    printf("%.6lf %.6lf\n", s, l);
    return 0;
}