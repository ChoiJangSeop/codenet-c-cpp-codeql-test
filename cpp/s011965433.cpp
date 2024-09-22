#define taskname ""
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxN = 1e5;

ll W, H, x, y;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> W >> H >> x >> y;
    cout << fixed << setprecision(8) << W * H / 2.0 << ' ' << setprecision(0) << (x == W / 2.0 && y == H / 2.0);
    return 0;
}
