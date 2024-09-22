#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float r;
	
	cin >> r;

	printf("%.5f",M_PI * 2 * r);
	printf(" %.5f\n",M_PI * r * r);

	return 0;
}