#include <iostream>
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;

int main(){
	double r;
	cin >> r;
	cout << fixed << setprecision(8) << PI*r*r << " " << 2.0 * PI * r << endl;
	return 0;
}
