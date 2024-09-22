#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  vector<char> v(len, ' ');
  
  for (int i = 0, j = 0; i < len; i++) {
    char ch = s.at(i);
    if (ch == '0' || ch == '1') {
      v.at(j) = ch;
      j++;
    } else if (ch == 'B') {
      v.at(j) = ' ';
      if (j >= 1) {
        v.at(j-1) = ' ';
      }
      j++;
    }
  }
  
  for (int i = 0; i < len; i++) {
    if (v.at(i) != ' ') {
      cout << v.at(i);
      if (i == (len-1)) {
        cout << endl;
      }
    }
  }
}