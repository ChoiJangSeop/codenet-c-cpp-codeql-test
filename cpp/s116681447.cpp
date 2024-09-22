#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
int main() {
  string str;
  cin >> str;
  int N = str.size();
  vector<int> vec;
  rep(i, N) {
    if(str.at(i) == '0') {
      vec.push_back(0);
    }
    if(str.at(i) == '1') {
      vec.push_back(1);
    }
    if(str.at(i) == 'B') {
      vec.pop_back;
    }
  }
  rep(i, vec.size()) {
    cout << vec.at(i);
  }
}