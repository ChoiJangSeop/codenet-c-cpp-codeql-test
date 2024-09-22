#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define swap(a, b)    do { typeof(a) __tmp = (a); (a) = (b); (b) = __tmp; } while(0)
#define repd(i, a, b) for(typeof(b) i = a; i < (b); ++i)
#define rep(i, n)     repd(i, 0, n)
#define dump(x)       cerr << #x << " = " << (x) << endl
#define debug(x)      cerr << "L" << __LINE__ << ": " << #x << " = " << (x) << endl
#define YesNo(x)      cout << ((x) ? "Yes" : "No") << endl
#define YESNO(x)      cout << ((x) ? "YES" : "NO") << endl
#define absi(x)       ( ((x) >= 0) ? (x) : (-(x)) )

int main(int argc, const char* argv[]) {
	ll w, h, x, y;
	cin >> w >> h >> x >> y;

	cout << ((double)(w * h) / 2.0) << " " << ((w == x * 2) && (h == y * 2)) << endl;

	return 0;
}
