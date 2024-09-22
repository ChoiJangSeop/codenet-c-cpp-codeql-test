#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef double DB;
const LL MOD = 1e9+7;
const LL NMAX = 1e6+7;
const string NAME = "test";

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen((NAME + ".inp").c_str(), "r", stdin);
    //freopen((NAME + ".out").c_str(), "w", stdout);
    int n; cin >> n;
    int a, b, c;
    a = (n / 100) % 10;
    b = (n / 10) % 10;
    c = (n / 1) % 10;
    if(a != b) {
        if(a < b) a++;
        cout << a << a << a;
        return 0;
    }
    if(b != c) {
        if(b < c) a++;
        cout << a << a << a;
        return 0;
    }
    cout << a << a << a;
    return 0;
}
