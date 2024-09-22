#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;

const int N = 100010;
const double eps = 1e-6;

double w, h, x, y;

int main()
{
    cin >> w >> h >> x >> y;

    cout << fixed << setprecision(15) << 0.5 * w * h << ' ';
    if(x - w / 2 < eps && y - h / 2 < eps) puts("1");
    else puts("0");
    return 0;
}
