#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define len(v) ll(v.size())

template <class T>
void cout_vec(const vector<T> &vec){
  for(auto itr:vec) cout<<itr<<' ';
  cout<<'\n';
}

typedef pair<ll,ll> P;
const ll mod=1e9+7;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    double w,h,x,y;
    cin>>w>>h>>x>>y;
    if(w==h){
      if(x==y || x+y==h){
        cout<<setprecision(30)<<(double)h*w/2<<' ';
        double a1,a2;
        a1=x*h,a2=y*w;
        double sum=h*w;
        if(a1>sum/2) a1=sum-a1;
        if(a2>sum/2) a2=sum-a2;
        if(x==w/2 && y==h/2){
          cout<<1<<endl;
          return 0;
        }else if(a1==a2){
          cout<<1<<endl;
          return 0;
        }else{
          cout<<0<<endl;
          return 0;
        }
      }

    }
    double a1,a2;
    a1=x*h,a2=y*w;
    double sum=h*w;
    if(a1>sum/2) a1=sum-a1;
    if(a2>sum/2) a2=sum-a2;
    cout<<setprecision(30)<<max(a1,a2)<<' ';
    if(a1==a2){
      cout<<1<<endl;
    }else{
      cout<<0<<endl;
    }
}