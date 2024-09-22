#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
#define FOR(i,n) for(int (i)=0;(i)<(n);(i)++)
#define FOR1(i,n) for(int (i)=1;(i)<(n);(i)++)
#define eFOR(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define eFOR1(i,n) for(int (i)=1;(i)<=(n);(i)++)
#define SORT(i) sort((i).begin(),(i).end())
#define rSORT(i) sort((i).begin(),(i).end(), greater<int>());
#define YES(i) cout << ((i) ? "Yes" : "No") << endl;
constexpr auto INF = 1000000000;
constexpr auto LLINF = 1LL << 62;
constexpr auto mod = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; }return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; }return 0; }

int main() {
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    if (x == w / 2 && y == h / 2) {
        cout << h * w / 2 << " " << 1 << endl;
    }
    else {
        cout << h * w / 2 << " " << 0 << endl;
    }
}
