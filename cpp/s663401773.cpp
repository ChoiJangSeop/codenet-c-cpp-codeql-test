#include <iostream>
using namespace std;

int main() {
	long double h, w, x, y;
	cin >> w >> h >> x >> y;
	
	if(x == w/2 && y == h/2) cout << (h*w)/2 << " " << 1;
	else cout << (h*w)/2 << " " << 0;
	// your code goes here
	return 0;
}