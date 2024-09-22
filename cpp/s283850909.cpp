#include <iostream>

using namespace std;

int main()
{
	int w, h, x, y;
	cin >> w >> h >> x >> y;
	
	double ans = w * h / 2.0;
	if (x + x == w && y + y == h) {
		printf("%.12f 1\n", ans);
	}
	else {
		printf("%.12f 0\n", ans);
	}

	return 0;
}