#include <bits/stdc++.h>
 
#define ALL(l)  (l).begin(),(l).end()
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
typedef long long ll;
ll mod =  1000000007;
ll maxn = 1000000000;
 
//---------------------------------------------------------------------------------------------------
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vll = vector<ll>; // intの1次元の型に vi という別名をつける
using vvi = vector<vi>; // intの2次元の型に vvi という別名をつける
using vs = vector<string>; // stringの1次元の型に vs という別名をつける
using pll = pair<ll, ll>; // これ以降 pii という型名はpair<ll, ll> と同じ意味で使える
//---------------------------------------------------------------------------------------------------
 
int main(){
   double w,h,x,y;
   cin>>w>>h>>x>>y;
   cout<<(w*h)/2<<" ";
   if(x==w/2&&y==h/2)cout<<1<<endl;
   else cout<<0<<endl;
   
   
   
}
   

