//c++ テンプレ
#include<bits/stdc++.h>
using namespace std;

typedef long long llint;
typedef long double ld;

#define inf 1e18
#define mod 1000000007
priority_queue<llint,vector<llint>,greater<llint> > que;
priority_queue<llint> Que;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int W,H;
int x,y;

void solve(){
    cin >> W >> H >> x >> y;
    int c=0;
    if(W==x*2 && H==y*2)c=1;
    double ans=(H*W)/2.0;
    printf("%f %d\n",ans,c);
}  

int main(){
  solve();
  return 0;
}
