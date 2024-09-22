#include <iostream>
#include <iomanip>

#define PAI 3.141592

using namespace std;

int main(void) {
	int r;

	cin >> r;

	cout << fixed << setprecision(6)<< r * r * PAI << " " << 2 * r * PAI << endl;

	return 0;
}