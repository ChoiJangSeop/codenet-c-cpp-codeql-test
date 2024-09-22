#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  for (int i = 0; i < 3; i++) {
    if (S.at(i) == '1') {
      S.at(i) = '9';
    }
    else if (S.at(i) == '9') {
      S.at(i) = '1';
    }
  }
  cout << S << endl;
}