#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  string T;
  for (char c : S) {
    if (c == '1') {
      T += '9';
    } else if (c == '9') {
      T += '1';
    } else {
      T += c;
    }
  }
  cout << T << endl;

  return 0;
}
