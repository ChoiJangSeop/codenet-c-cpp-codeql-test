#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float w,h,x,y;
	cin >> w >> h >> x >> y;
	float s = abs(w * h);
	float anss = s / 2;
	int answ = 0;
	if (x != w/2 && y != h/2){
		answ = 1;
	}
	if (s == 0){
		answ = 1;
	}
	cout << anss << " " << answ;

}
