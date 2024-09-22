#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <cmath>
#include <cstdio>

using namespace std;

typedef long long ll;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

int main(int argc, char **argv)
{
    ll W, H, x, y;
    cin >> W >> H >> x >> y;
    int f = ((x * 2 == W) && (y * 2 == H))? 1 : 0;
    printf("%f %d\n", (double)W * (double)H / 2, f);

    return 0;
}
