#include <iostream>
using namespace std;

int main() {
	char a[3];
	cin >> a[0] >> a[1] >> a[2];
	int x = 0;
	if (a[0] == '1') {
		x += 900;
	} else {
		x += 100;
	}
	if (a[1] == '1') {
		x += 90;
	} else {
		x += 10;
	}
	if (a[2] == '1') {
		x += 9;
	} else {
		x += 1;
	}
	cout << x << endl;
	return 0;
}

