#include<iostream>
using namespace std;

int main() {
	int w, h, x, y;
	int a,b,d=0;
	float c;
	cin >> w >> h >> x >> y;
	if (x == y) d = 1;
	a = w - x;
	b = h - y;
	if (a > b) {
		c=h*x;
	}
	else if (a < b) {
		c = w * y;
	}
	else {
		c = w * h / 2;
	}
	printf("%.6f", c);
	cout << " " << d << endl;
	return 0;
}