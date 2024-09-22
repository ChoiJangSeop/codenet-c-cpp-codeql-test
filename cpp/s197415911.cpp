#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main() 
{
    int n;
    cin >> n;

    vector<pair<int,int>> a;
    rep(i,n) {
        int x;
        cin >> x;
        a.push_back(make_pair(x,i));
    } 
    
    sort(a.rbegin(), a.rend());

    rep(i,n) {
        if (i != a[0].second) cout << a[0].first << endl;
        else cout << a[1].first << endl;
    }
    
    return 0;
}
