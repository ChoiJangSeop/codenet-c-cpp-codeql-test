#include <bits/stdc++.h>
#define fastIO (cin.tie(0), cout.tie(0), ios::sync_with_stdio(false))
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define precise(i) fixed << setprecision(i)
using lint = long;
using llint = long long;
using namespace std;

int main() {
    fastIO;
    double r;
    cin >> r;
    cout << precise(6) << (r * r * M_PI) << " ";
    cout << precise(6) << (2 * M_PI * r) << endl;
}

