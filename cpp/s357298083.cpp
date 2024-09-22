#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <cmath>
#include <tuple>
#include <queue>
#include <bitset>
#include <set>
#include <map>
#include <list>

using ll = long long;
using ld = long double;
using namespace std;
const int INF = 1e9+100;
const ll INF64 = 7e18l;
const int mod = 1000000007;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(), (a).end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    FIN;

    ll n; cin >> n;
    vector<int> a(n+1,0);
    rep(i,1,n+1) cin >> a[i];

    vector<int> ans(n+1,0);
    ll m = 0;

    for(ll i=n;i>=1;i--){
        ll k = i;  ll flag = 0;
        while(k<=n){
            flag += ans[k];
            k += k;
        }
        flag = flag%2;
        if(flag != a[i]){
            ans[i] = 1;
            m++;
        }
    }

    cout << m << endl;
    rep(i,1,n+1){
        if(ans[i] > 0) cout << i << " ";
    }
    cout << endl;
    return 0;
}
