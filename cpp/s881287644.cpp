#include"bits/stdc++.h"
using namespace std;
using ll = int64_t;

int main() {
    ll W, H, x, y;
    cin >> W >> H >> x >> y;
    cout << fixed << setprecision(15) <<  W * H / 2.0 << " " << (2 * x == W && 2 * y == H) << endl;
}