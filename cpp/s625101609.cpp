#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define rep(i,n) for(int i=0;i<(int)(n);i++)
static const int mod = 1e+7;
static const long long INF = 1LL << 60;
typedef long long ll;
int main(){
    ll W, H, x, y;
    cin >> W >> H >> x >> y;
    bool flag = false;
    double a = x * H; 
    double aa = (W-x)*H;
    cout<<"aa "<<aa<<endl;
    double b = y * W;
    double bb = (H-y)*W;
    cout<<"bb "<<bb<<endl;
    double big_a = a;
    double big_b = b;
    double big = 0.0;
    big_a = max(a, aa);
    big_b = max(bb, b);
    big = min(big_a, big_b);
    if(big_a==big_b)flag = true;
    cout << big << " " << flag << endl;
}