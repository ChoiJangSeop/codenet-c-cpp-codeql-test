#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double r;
	double area, cir;
	cin >> r;

	area = M_PI * r * r;
	cir = 2 * M_PI * r;

	cout << fixed << area << " " << cir;

	return 0;
}