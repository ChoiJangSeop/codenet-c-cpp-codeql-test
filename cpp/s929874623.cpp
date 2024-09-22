#include <bits/stdc++.h>
 
using namespace std;

int gcd(int x, int y) {
    if(y == 0)
        return x;
    else {
        return gcd(y, x % y);
    }
}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
