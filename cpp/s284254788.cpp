#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>

using namespace std;
using ll = long long;

void _cin(){} template <class Head, class... Tail> void _cin(Head&& head, Tail&&... tail){ cin >> head; _cin(forward<Tail>(tail)...); }
void _cout(){ cout << "\n"; } template <class Head, class... Tail> void _cout(Head&& head, Tail&&... tail){ cout << head; _cout(forward<Tail>(tail)...); }
int gcd(int a, int b){ return (b == 0) ? a : gcd(b, a % b); }

#define For(i, n) for(int i = 0; i < (n); i ++)
#define Rep(n) For(_, n)
#define Range(c) c.begin(), c.end()
#define RevRange(c) c.rbegin(), c.rend()
#define Contains(c, x) (find(Range(c), x) != c.end())
#define Sort(a) sort(Range(a))
#define DeSort(a) sort(RevRange(a))
#define Reverse(c) reverse(Range(c))
#define Vec2(T, n, m, xs) vector<vector<T>> xs(n, vector<T>(m))
#define Sum(a) accumulate(Range(a), 0)
#define Cusum(T, n, xs, sxs) vector<T> sxs(n+1); For(i, n) sxs[i+1] = sxs[i] + xs[i]
#define Cin(T, ...) T __VA_ARGS__; _cin(__VA_ARGS__)
#define Cins(T, n, xs) vector<T> xs(n); For(i, n) cin >> xs[i]
#define Cins2(T, n, xs, ys) vector<T> xs(n), ys(n); For(i, n) cin >> xs[i] >> ys[i]
#define Cins3(T, n, xs, ys, zs) vector<T> xs(n), ys(n), zs(n); For(i, n) cin >> xs[i] >> ys[i] >> zs[i]
#define Cinss(T, n, m, xs) Vec2(T, n, m, xs); For(i, n) For(j, m) cin >> xs[i][j]
#define Cinm(T, n, map) unordered_map<T, int> map; Rep(n){ Cin(T, x); map[x] ++; }
#define Cout(...) _cout(__VA_ARGS__)
#define Couts(xs) for(const auto &e : xs) cout << e << "\n"; cout << "\n"
#define Coutyn(cond) Cout((cond) ? "yes" : "no")
#define CoutYn(cond) Cout((cond) ? "Yes" : "No")
#define CoutYN(cond) Cout((cond) ? "YES" : "NO")

int main(void){
    Cin(string, s);
    For(i, (int)s.size()){
        while(true){
            if(s[i] == 'B'){
                s.erase(s.begin() + i);
                continue;
            }
            if(i < (int)s.size()-1 && s[i+1] == 'B'){
                s.erase(s.begin() + i, s.begin() + i + 2);
                continue;
            }
            break;
        }
    }
    Cout(s);
}
