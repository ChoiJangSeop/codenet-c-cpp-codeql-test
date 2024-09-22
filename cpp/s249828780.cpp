// "header" {{{
#pragma GCC optimize("Ofast")

#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <list>
#include <tuple>
#include <iomanip>
#include <climits>
#include <cstdlib>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,n) for(int i=1;i<=(n);++i)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define int int64_t
#define double long double
#define Fixed fixed << setprecision(10)
#define moke_pair make_pair

constexpr int INF = 0x3f3f3f3f;
constexpr int64_t LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr int64_t mod1 = 1000000007;
constexpr int64_t mod2 = 998244353;

constexpr int dx[] = {1,0,-1,0,1,1,-1,-1};
constexpr int dy[] = {0,-1,0,1,1,-1,-1,1};

template <class A, class B> inline bool chmax(A &a, const B &b) { return b > a && (a = b, true); }
template <class A, class B> inline bool chmin(A &a, const B &b) { return b < a && (a = b, true); }

template <class T> using min_heap = priority_queue<T,vector<T>,greater<T> >;
template <class T> using max_heap = priority_queue<T>;
template <class T,class U> using umap = unordered_map<T,U>;

inline int64_t updiv(int64_t n,int64_t d){ return ((n + d -1) / d); }
inline int square(int a){ return a * a; }

int gcd(int a,int b){ return b ? gcd(b,a % b) : a;}
int lcm(int a,int b){ return a / gcd(a,b) * b;}
// }}}

signed main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n),cuml(n+5),cumr(n+5);

    rep(i,n){
        cin >> a[i];
        cuml[i+1] = max(a[i],cuml[i]);
    }

    cumr[n] = a[n-1];
    for(int i = n-1;i >= 1;--i){
        cumr[i] = max(a[i-1],cumr[i+1]);
    }

    reps(i,n){
        cout << max(cuml[i-1],cumr[i+1]) << '\n';
    }

    return 0;
}