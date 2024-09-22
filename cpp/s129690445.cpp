#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define repf(i,a,b) for (int i = (a); i < (b); i++)
#define repi(i,a,b) for (int i = (a); i <= (b); i++)
#define repr(i,a,b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define debug(x)  cout << #x << " = " << (x) << endl;
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using tiii = tuple<int, int, int>;

int main() {
  string s; cin >> s;
  string ans;
  for (auto c : s) {
    if (c == '0') {
      ans.push_back('0');
    }
    else if (c == '1') {
      ans.push_back('1');
    }
    else if (c == 'B' && s != "") {
      ans.pop_back();
    }
  }
  
  cout << ans << endl;
}