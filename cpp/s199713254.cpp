#include<iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<ATLComTime.h>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cin >> a;
	cout << fixed;
	setprecision(6);
	cout << a*a*M_PI << ' ' << 2 * a*M_PI << endl;
	return 0;
}