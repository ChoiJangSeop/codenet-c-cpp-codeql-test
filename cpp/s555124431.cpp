#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	double r;
	cin >> r;
	printf("%f %f\n",r*r*M_PI,2*r*M_PI);
	return 0;
}
