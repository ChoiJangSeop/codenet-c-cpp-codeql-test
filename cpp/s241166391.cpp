#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n) ;i++)
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
using ll=long long;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define MOD  1000000007
const ll INF=1e18;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b){ a = b; return 1; } return 0; }



int main(int argc, char const *argv[]) {
  ll h,w,x,y;
  cin >> w >> h >> x >> y;
  double s1,s2,s3,s4;
  if((x==w && y==h) || (x==0 && y==0) ||(x==w && y==0) ||(x==0 && y==h)){
    printf("%.9f 0",(double)h*w/2);
  }
  else if(x==0){
    printf("%.9f 0",(double)max((double)y*w,(double)(h-y)*w));
  }
  else if(y==0){
    printf("%.9f 0",(double)(max)((double)h*x,(double)h*(w-x)));
  }
  else{
    s1=h*x;
    s2=h*(w-x);
    s3=y*w;
    s4=w*(h-y);
    printf("%.9f ",(double)max(min(s1,s2),min(s3,s4)) );
    if(min(s1,s2)==min(s3,s4) || max(s1,s2)==max(s3,s4)) cout << "1" << endl;
    else cout << "0" << endl;
  }
  return 0;
}
