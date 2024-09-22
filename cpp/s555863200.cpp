#include <bits/stdc++.h>
//#define int long long int
#define MOD 1000000007
#define MAX INT_MAX
using namespace std;

int add(int a, int b) {
    int z = (a%MOD + b%MOD) % MOD;
    return z;
}

int mul(int a, int b) {
    int z = (a%MOD * b%MOD) % MOD;
    return z;
}

int myXOR(int x, int y) {
     return (x | y) & (~x | ~y);
}

void solve() {
    int n;
    cin >> n;
    vector <int> v;
    vector <int> ans;
    int max = 0, secmax = 0;
    vector <int> copy;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
        copy.push_back(x);
        if(x > max)
            max = x;
    }
    sort(copy.begin(), copy.end(), greater<int>());
    for(int i=0;i<n;i++) {
        if(v[i] < max)
            ans.push_back(max);
        else
            ans.push_back(copy[1]);
    }
    for(int x : ans)
        cout << x << '\n';
    return ;
}              

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
