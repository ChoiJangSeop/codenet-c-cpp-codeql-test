#include <iostream>
#include <vector>
#include <string>

using namespace std;

using ll = long long;


int main() {
	ll w,h;
	ll x,y;
	cin >> w >> h >> x >> y;

	ll ans =  w * h / 2;
	string s = to_string(ans);
	if (w * h % 2 == 1) {
		s += ".5";
	}




	cout << s << " ";



	if (w % 2 == 0 && x == w / 2 && h % 2 == 0 && y == h / 2) {
		cout << 1;
	} else {
		cout << 0;
	}
	cout << endl;

	return 0;
}