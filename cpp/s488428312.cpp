#include<iostream>

using namespace std;

int main() {
	double w, h, x, y;
	cin >> w >> h >> x >> y;
	double gx = w / 2;
	double gy = h / 2;
	int ch = 0;
	if (x == gx && y == gy) {
		ch = 1;
	}
	double s = w * h/2;
	cout << s; cout << ch;
	return 0;
}