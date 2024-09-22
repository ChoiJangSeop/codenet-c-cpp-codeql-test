#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  string s;
  cin >> s;
  vector<char> t;
  rep(i,s.size()) cin >> t.at(i);
  vector<char> u;
  rep(i, t.size()){
    if (i=0) {
      if (t.at(0) == 'B') {}
      else {
        u.push_back(t.at(0));
      }
    }
    else {
      if (t.at(i) == 'B') {
        u.pop_back();
      }
      else {
        u.push_back(t.at(i));
      }
    }
  }
  rep(i, u.size()){
    cout << u.at(i) << endl;
  }
}