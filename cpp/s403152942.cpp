#include <iostream>
#include <vector>
#include <iomanip>
#include <ios>
#define int long long
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
#define REP(i, n) for(int i = 1; i < (int)(n); ++i)
using namespace std;

signed main() {
    int W, H, x, y;
    cin >> W >> H >> x >> y;
    
    cout << fixed << setprecision(10) << H * W / 2.0 << " ";
    if (x * 2 == W && y * 2 == H) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
