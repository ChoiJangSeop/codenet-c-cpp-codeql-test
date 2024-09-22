#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c == a / 2 && d == b / 2)
        cout << a * b / 2 << ' ' << 1 << '\n';
    else
        cout << a * b / 2 << ' ' << 0 << '\n';

    return 0;
}
