#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	double r;
	cin >> r;

	double S,l;

	S = r*r*M_PI;
	l = 2*r*M_PI;

	printf("%.6f %.6f", S,l);

	return 0;
}
