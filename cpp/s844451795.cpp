#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int main(void)
{
	int W, H, x, y;
	cin >> W >> H >> x >> y;
	long long area = W * H;
	area /= 2;
	int a = 0;
	if (x + x == W && y + y == H) a = 1;
	cout << area << " " << a << endl;
	return 0;
}
