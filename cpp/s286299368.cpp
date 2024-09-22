#include <bits/stdc++.h>

#define REP(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define FOR(i, b, e) for(int (i) = (b); (i) < (e); ++(i))
#define ALL(c) (c).begin(), (c).end()
#define MIN(c) (*min_element(ALL(c))) 
#define MAX(c) (*max_element(ALL(c)))
#define ACC(c) (accumulate(ALL(c), 0))
#define MP(a, b) (make_pair((a), (b)))
#define ENDL "\n"
#define PRINT(x) cout << (x) << ENDL

using namespace std;
using ll = long long;
using pint = pair<int, int>;
using pll = pair<ll, ll>;

inline int in(int& a) {return scanf("%d", &a);}
inline void out(int n) {printf("%d\n", n);}
template<typename T> inline void swap(T& a, T& b) {T tmp = a; a = b; b = tmp;}
auto pint_compare = [](pint x, pint y) -> bool{return (x.first < y.first);};


signed main(){
    ll W, H, x, y;
    cin >> W >> H >> x >> y;
    double S = ((double)W / 2.0) * (double)H;
    printf("%.9f", S);
    if(x == W / 2 && y == H / 2) printf(" 1\n");
    else printf(" 0\n");
    return 0;    
}