#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MOD=1000000007;
const double PI=3.14159265358979;
const ll INF= pow(10,18);
typedef pair<ll,ll> P;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) FOR(i,0,n)
string abc="abcdefghijklmnopqrstuvwxyz";
string ABC="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
struct edge{ll to,cost;};

int main() {
  string s;
  string t;
  cin >> s;
  ll k=s.size();
  rep(i,k){
    if(s[i]=='0'){
      t +='0';
    }
    else if(s[i]=='1'){
      t +='1';
    }
    else{
      if(t.size()>=1){
        t.pop_back();
      }
    }
  }
  cout << t << endl;
}