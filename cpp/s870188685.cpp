#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double r,area,zhou;
	area = M_PI * r * r;
	zhou = M_PI * (r * 2);
	printf("%lf %lf",area,zhou);
	return 0;
}