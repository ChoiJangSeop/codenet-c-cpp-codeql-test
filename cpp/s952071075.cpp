#include <bits/stdc++.h>
using namespace std;

int main() {
  string bemiho;
  cin >> bemiho;
  int size = bemiho.size();
  vector<char> katoshi(size);
  int N = 0;
  for (int i = 0; i < size; i++) {
    if (bemiho.at(i) == '0') {
      katoshi.at(N) = '0';
      N++;
    }
    if (bemiho.at(i) == '1') {
      katoshi.at(N) = '1';
      N++;
    }
    if (bemiho.at(i) == 'B' && N > 0) {
      N--;
      katoshi.at(N) = ' ';
    }
  }
  for (int i = 0; i < katoshi.size(); i++) {
    cout << katoshi.at(i);
  }
  cout << endl;
}