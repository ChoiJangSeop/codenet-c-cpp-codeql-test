#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
	float w, h, x, y;
	cin >> w >> h >> x >> y;
	double ans;
	/*if (w / 2 == x || h / 2 == y) {
		ans = w * h /2;
	}
	else {
		if (x==0||x==w) {
			ans = w * (h / 2);
		}
		else if(y==0||y==h){
			ans = (w / 2) * h;
		}
		else if (w > h) {
			ans = w*(h / 2);
		}
		else {
			ans = (w/2) * h;
		}
	}*/
	ans = w * h *2;
	cout << fixed << setprecision(7) << fabs(ans) << " " << setprecision(0) << (bool)((w / 2 == x) && (h / 2 == y));
	return 0;
}