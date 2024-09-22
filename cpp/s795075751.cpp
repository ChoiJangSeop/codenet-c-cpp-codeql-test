#include <iostream>
#include <stdio.h>
using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>


int main()
{
	double nA;
	cin >> nA;
	double dA, dC;
	dA = M_PI*nA*nA;
	dC = 2 * M_PI*nA;

	printf("%.6f %.6f\n", dA, dC);

	//system("pause");
	return 0;
}