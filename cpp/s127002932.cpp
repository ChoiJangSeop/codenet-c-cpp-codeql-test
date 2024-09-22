#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int w, h, x, y;
    cin >> w >> h >> x >> y;
    double res1 = (double)w * h / 2;
    int res2;
    if (w % 2 == 0 && h % 2 == 0) res2 = 1;
    else res2 = 0;
    printf("%.10f %d\n", res1, res2);
}

