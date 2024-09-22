#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

using ll = long long;

int main(){
	double w;
	double h;
	double x;
	double y;

	cin >> w;
	cin >> h;
	cin >> x;
	cin >> y;

	double size = w * h / 2.0;
	int ways = 0;
	if (x == w / 2.0 && y == h / 2.0) {
		ways = 1;
	}
	
	int return_value;

	cout << setprecision(10) << size << " " << ways << endl;
	
	return 0;
}