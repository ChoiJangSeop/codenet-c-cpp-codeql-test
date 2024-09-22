#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>


#define PI 3.14415926535

using namespace std;

int main() {

	int r;

	scanf_s("%d", &r);

	printf("%f %f", (double)r*r*PI, (double)r * 2 * PI);

	
	return 0;
}	