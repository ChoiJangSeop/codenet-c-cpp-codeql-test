#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> P;

const ll INF = 1ll << 60;
ll MOD = 998244353;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n)
    cin >> a[i];

    for (int i = 0; i < n; ++i)
    {
        int v = -1;
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            if (a[j] > v)
                v = a[j];
        }
        cout << v << endl;
    }
    return 0;
}