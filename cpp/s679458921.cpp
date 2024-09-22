
#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (i = 0; i < (n); i++)
#define P(x) cout << (x) << "\n"

#define MOD 1000000007            // 1e9+7
#define INF 1000000001            // 1e9+1
#define LINF 1000000000000000001  // 1e18+1

string a, b;
int i;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);



    cin >> a;
    REP(i, 3) {
        if (a[i] == '1')
            b += '9';
        else
            b += '1';
    }
    P(b);
    return 0;
}