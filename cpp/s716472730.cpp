#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <utility>
#include <tuple>
#include <string>
#include <cctype>
#include <cstdio>
#include <math.h>
using f32 = float;
using f64 = double;
using f80 = __float80;
constexpr int64_t INF = 1'010'000'000'000'000'017LL;

constexpr int64_t MOD = 1'000'000'007LL;

constexpr f64 EPS = 1e-12;

constexpr f64 PI = asin(-1.0);
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using vi = vector<int>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvi = vector<vi>;
using vs = vector<string>;
using vl = vector<LL>;
using vvl = vector<vl>;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vp = vector<P>;
#define REP(i, n) for (LL i = 0; i < (int)(n); i++)
#define FOR(i, m, n) for (LL i = m; i < n; i++)
#define SORT(x) sort(x.begin(), x.end())
#define REVE(x) reverse(x.begin(), x.end())
#define all(x) (x).begin(), (x).end()
#define fst first
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define sw swap
#define UP(x) transform(x.begin(), x.end(), x.begin(), ::toupper);
#define LOW(x) transform(x.begin(), x.end(), x.begin(), ::tolower);
struct initon
{
    initon()
    {
        cin.tie(0);
        ios::sync_with_stdio(false);
    };
};
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
int main()
{
    int n,max=0,c;
     cin >> n;
    vector<int> a(n);
  vector<int> b(n);
    REP(i, n)cin >> a[i];
   REP(i, n)b[i]=a[i];
  SORT(a);
    REP(i,n){
      if(a[n-1]==b[i]){
      cout <<a[n-2]<<endl;
      }else{
        cout <<a[n-1]<<endl;
      }
         }

}