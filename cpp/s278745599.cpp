#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define REP(i,x,n) for(int i = (x); i < (n); ++i)
#define ll long long
#define P pair<ll,ll>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()

const ll mod = 1e9+7;
const ll INF = 1e18;
const double pi = acos(-1);

int main(void)
{
    ll w,h,x,y;
    cin>>w>>h>>x>>y;
    double s = max(min((h-y)*w, h*w-(h-y)*w), min((w-x)*h, h*w-(w-x)*h));
    printf("%f %d\n",s,2*w==x && 2*h==y);
    return 0;
}