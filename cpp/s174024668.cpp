#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long w, h, x, y;
	cin >> w >> h >> x >> y;
	int type = 0;

	if (x == 0 && y == 0) {
		type = 1;
	}
	else if (x == w && y == h) {
		type = 1;
	}
	else if (x == 0 && y == h) {
		type = 1;
	}
	else if (x == w && y == 0) {
		type = 1;
	}

	if (type == 1) {
			printf("%.6lf 0\n", (double)w*(double)h / 2.0);
		return 0;
	}

	long long tate1, tate2;
	long long yoko1, yoko2;
	long long tatemax, tatemin, yokomax, yokomin;

	tate1 = (long long)x * h;
	tate2 = (long long)(w - x)*h;
	yoko1 = (long long)w * y;
	yoko2 = (long long)w * (h - y);

	tatemax = max(tate1, tate2);
	tatemin = min(tate1, tate2);
	yokomax = max(yoko1, yoko2);
	yokomin = min(yoko1, yoko2);

	if (tatemax == yokomax) {
		//		printf("%ld 1\n", tatemax);
		cout << tatemax << " 1" << endl;
	}
	else if (tatemax < yokomax) {
		//		printf("%.6 0\n", tatemax);
		cout << tatemax << " 0" << endl;
	}
	else {
		///		printf("%.6lf 0\n", yokomax);
		cout << yokomax << " 0" << endl;

	}

	return 0;
}
