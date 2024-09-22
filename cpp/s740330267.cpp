#include <algorithm>
#include <iostream> //入出力
#include <stdio.h>
#include <map>
#include <string>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <queue>
#include <iomanip> //小数点以下を表示させる(setprecision())

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define debug(x) cerr << x << " " \
                      << "(L:" << __LINE__ << ")" << '\n';

typedef long long ll;

using namespace std;

int main()
{

    int W, H, x, y;
    cin >> W >> H >> x >> y;

    int same = 0;
    if (2 * x == W && 2 * y == H)
    {
        same = 1;
    }
    double ans = 1.*H * W / 2;

    cout << fixed;
    cout << setprecision(8) << ans << ' ';
    cout << same << endl;

    return 0;
}
