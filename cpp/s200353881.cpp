#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	double pi = 3.1415926535;
	double r;
	cin >> r;
	cout << fixed << setprecision(6) << r * r * pi << " " << 2 * r * pi;
}