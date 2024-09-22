#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <string.h>
#include <queue>
#include <vector>
#include <set>
using namespace std;

int main() {
	long double H, W, x, y;
	cin >> H >> W >> x >> y;
	long long int W2 = W, H2 = H; 
	if (W2 % 2 && H2 % 2)cout << H*W / 2.0l << " ";
	else cout << W2*H2 * 0.5 << " ";
	if (W / 2 == x&&H / 2 == y/*&&W2 % 2 == 0 && H2 % 2 == 0*/) {
		cout << 1;
	}
	else cout << 0;
}
