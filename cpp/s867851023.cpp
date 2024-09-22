#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define reps(i, n, s) for (int i = s; i < n; i++)
using namespace std;
const double PI = acos(-1);
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            cout << a[i] << " ";
        }
        else
        {
            cout << a[i] << endl;
        }
    }
   // system("pause");
    return 0;
}
