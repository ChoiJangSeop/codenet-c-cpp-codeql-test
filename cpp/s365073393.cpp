#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  char t[10];
  int i = 0;
  for (char c : s) {
    if (c == '0') {
      t[i] = '0';
      i++;
    } else if (c == '1') {
      t[i] = '1';
      i++;
    } else if (c == 'B' && i > 0) {
      i--;
    }
  }

  for (int j = 0; j < i; j++) {
    cout << t[j];
  }
  cout << endl;

  return 0;
}
