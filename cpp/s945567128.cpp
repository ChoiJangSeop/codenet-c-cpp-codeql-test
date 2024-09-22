#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#include <bits/stdc++.h>
using namespace std;

#define INIT std::cin.tie(0);std::ios::sync_with_stdio(false);
#define ALL(c) (c).begin(), (c).end()
#define CALL(c) (c).cbegin(), (c).cend()
#define RALL(c) (c).rbegin(), (c).rend()
#define CRALL(c) (c).crbegin(), (c).crend()
#define REP(i, n) for (int i = 0; i < static_cast<int>(n); i++)
#define FOR(i, s, n) for (int i = s; i < static_cast<int>(n); i++)
#define ASC(t) [](t& x, t& y){ return x < y; }
#define DESC(t) [](t& x, t& y){ return x > y; }
#define PSORT(s,p,e) partial_sort((s), next((s), (p)), (e))
#define VIEW(v,t) for_each((v).begin(), (v).end(), [](t& a) { cout << a << " "; }); cout << endl;

#define IN(a, x, b) (a<=x && x<=b)
template<class T> inline T CHMAX(T& x, const T y){return x=(x<y)?y:x;}
template<class T> inline T CHMIN(T& x, const T y){return x=(x>y)?y:x;}
#define OUT(dist) std::cout<<(dist);
#define WS std::cout<<" ";
#define NL std::cout<<"\n"

using PII = pair<int, int>;
using PLL = pair<long long, long long>;
using LL = long long;
using ULL = unsigned long long;
template<class T> using V = vector<T>;
template<class T> using V2 = vector<vector<T>>;
template<class T, int W=255> using A = array<T, W>;
template<class T, int W=255, int H=255> using A2 = array<array<T, W>, W>;



int main(){
    INIT;
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    if((x == 0 && y == 0) || (x == W && y ==0) || (x == 0 && y == H) || (x == W && y == H)) {
        cout << std::setprecision(12) << ((W*H)/2 - 0.0000000001);
        cout << " " << 0;
        return 0;
    } 
    double a[] = { 
        /*((x == 0 || x == W) ? -1 : (W-x)*H), 
        ((x == 0 || x == W) ? -1 : x*H), 
        ((y == 0 || y == H) ? -1 : W*(H-y)), 
        ((y == 0 || y == H) ? -1 : W*y)*/
        ((W-x)*H), 
        (x*H), 
        (W*(H-y)), 
        (W*y)
    };

    double ans1, f = 0;

    double z1 = (a[0]>a[1] ? a[1] : a[0]);
    double z2 = (a[2]>a[3] ? a[3] : a[2]);
    double z = (z1 > z2 ? z1 : z2);
    if(z1 == z2) f = 1;

    cout << std::setprecision(12) << z;
    cout << " " << f;
}
