#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<functional>
#include<math.h>

#define rep(i,n) for(ll i=0;i<(n);i++)
typedef long long ll;
using namespace std;

int main() {
	ll w, h;
	cin >> w >> h;
	ll x, y;
	cin >> x >> y;

	double a = double(w*h / 2);
	double cw = w / 2;
	double ch = h / 2;

	int ans = 0;
	if (w == cw && h == ch) ans = 1;

	printf("%.10f %d\n", a, ans);

	return 0;
}
