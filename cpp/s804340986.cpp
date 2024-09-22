#include<cstdio>
#include<iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include<math.h>

int main() {
	int r;
	cin >> r;

	printf("%lf %lf", 2 * M_PI * (double)r, M_PI * (double)r * (double)r);
	return 0;
}

