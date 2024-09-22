#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<math.h>
#include<queue>
#include<deque>
#include<map>
#include<bitset>

#define rep(i, n) for(int i = 0;i < (n);i++)
#define repr(i, n) for(int i = (n);i >= 0;i--)
#define repf(i, m, n) for(int i = (m);i < (n);i++)

using namespace std;
using ll = long long;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1;} return 0;}

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};


//////////////////////////////////////////////////



int main() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 0, mmx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx) {
            mmx = mx;
            mx = a[i];
        } else if (mx >= a[i] && a[i] > mmx) {
            mmx = a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx) cout << mmx << endl;
        else cout << mx << endl;
    }
    

    return 0;
}