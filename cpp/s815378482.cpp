#include <bits/stdc++.h>

// Begin {{{
using namespace std;

#define all(x) x.begin(), x.end()
#define rep(i, n) for (i64 i = 0; i < (n); ++i)
#define reps(i, s, n) for (i64 i = (s); i <= (n); ++i)
#define VAR(Type, ...) Type __VA_ARGS__; IN(__VA_ARGS__)
#define Float(x) OUTN(fixed, setprecision(x));

using i64 = int_fast64_t;
using pii = pair<i64, i64>;

template <class A, class B>
inline bool chmax(A &a, const B &b) { return b > a && (a = b, true); }

template <class A, class B>
inline bool chmin(A &a, const B &b) { return b < a && (a = b, true); }

constexpr int INF = 0x3f3f3f3f;
constexpr i64 LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr int MOD = int(1e9) + 7;

// IN
void IN() {}
template <class Head, class... Tail>
void IN(Head&& head, Tail&&... tail) {
  cin >> head;
  IN(forward<Tail>(tail)...);
}

// OUTS
void OUTS() {}
template <class Head, class... Tail>
void OUTS(Head&& head, Tail&&... tail) {
  cout << head << " \n"[sizeof...(tail)==0];
  OUTS(forward<Tail>(tail)...);
}

template <class T>
void OUTS(vector<T> &vec) {
  for (auto &e : vec) cout << e << " \n"[&e==&vec.back()];
}

template <class T>
void OUTS(vector<vector<T>> &df) {
  for (auto &vec : df) OUTS(vec);
}

// OUTL
void OUTL() {}
template <class Head, class... Tail>
void OUTL(Head&& head, Tail&&... tail) {
  cout << head << "\n";
  OUTL(forward<Tail>(tail)...);
}

template <class T>
void OUTL(vector<T> &vec) {
  for (auto &e : vec) cout << e << "\n";
}

// OUTN
void OUTN() {}
template <class Head, class... Tail>
void OUTN(Head&& head, Tail&&... tail) {
  cout << head;
  OUTN(forward<Tail>(tail)...);
}
// }}} End

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  VAR(string, s);
  for (auto &e : s) {
    if (e == '1') e = '9';
    else e = '1';
  }
  OUTL(s);
  return 0;
}
