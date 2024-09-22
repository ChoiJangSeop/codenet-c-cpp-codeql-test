#include <bits/stdc++.h>
#define int long long
#define ll long long 
#define rep(i,a,b) for(signed i=a;i<(b);++i)
#define erep(i,a,b) for(signed i=a;i<=(b);++i)
#define per(i,a,b) for(signed i=(a);i>(b);--i)
#define eper(i,a,b) for(signed i=(a);i>=b;--i)
#define fore(i, x, a) for(auto &&x:a) 
#define ITR(i,b,e) for(auto i=(b);i!=(e);++i)
#define pb emplace_back
#define mp make_pair
#define ALL(x) begin(x),end(x)
#define F first
#define S second
#define debug(x)  cout << #x << ": " << (x) << '\n';
const long long INF=1001001001001001001;
const int MOD=(int)1e9 + 7;
const double EPS=1e-9;
using namespace std;
using Pii = pair<int,int>;
using vii = vector<int>;
template<class T>using  PS_queue = priority_queue<T, vector<T>, greater<T> >;
template<class T>using vv = vector<T>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
template<typename A, size_t N, typename T> void Fill(A (&array)[N], const T &val){fill( (T*)array, (T*)(array+N), val );}
template<class T> ostream& operator<<(ostream &os,const vector<T> &v) {
    ITR(i,begin(v),end(v))os<<*i<<(i==end(v)-1?"":" ");return os;}
template<class T> ostream& operator<<(ostream &os,const vector<vector<T> > &v) {
    ITR(u,begin(v),end(v))ITR(w,begin(*u),end(*u))os<<*w<<(w==end(*u)-1?"\n":" ");return os;}
template<class T> istream& operator>>(istream &is,vector<T> &v) {
    ITR(i,begin(v),end(v)) is>>*i;return is;}
template<class T,class U> istream& operator>>(istream &is, pair<T,U> &p) {
    is>>p.first>>p.second;return is;}
template<class T>T gcd(T a, T b){ return b ? gcd(b, a % b) : a; }
template<class T>T lcm(T a, T b){ return a / gcd(a, b) * b; }
struct edge { int from, to, cost; };
int dy[]={0, 1, -1, 0}; int dx[]={1, 0, 0, -1};
// cout << fixed << setprecision(10) << val;

int n, a[200005], l[200005], r[200005];
signed main() {
 cin.tie(0);
 ios::sync_with_stdio(false);
  cin >> n;
  rep(i, 0, n) cin >> a[i];
  l[0] = a[0];
  rep(i, 1, n) l[i] = max(l[i-1], a[i]);
  r[n-1] = a[n-1];
  eper(i, n-2, 0) r[i] = max(r[i+1], a[i]);
  rep(i, 0, n) {
    cout << max((i-1 >= 0 ? l[i-1] : 0), (i+1 < n ? r[i+1] : 0)) << endl;
  }
  return 0;
}


