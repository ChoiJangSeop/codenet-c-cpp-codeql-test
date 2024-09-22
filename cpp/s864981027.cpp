//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <queue>
#include <list>
#include <limits>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

    class Pairs{
        public : ll a;
        ll b;
        void setpairs(ll _a, ll _b){
            a = _a;
            b = _b;
        }
    };

    bool cmp(const Pairs &A, const Pairs &B){
        return (A.a < B.a);
    }


int main(){  
    long long W,H,x,y;
    cin >> W >> H >> x >> y;
    long double ans;
    ans = W;
    ans *= H;
    ans /= 2;
    cout << ans << " ";
    if(x == W/2 || y == H/2) cout << "1";
    else cout << "0";
}
