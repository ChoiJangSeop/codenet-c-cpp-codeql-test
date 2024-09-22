#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string s;
  cin >> s;

  char buffer[100];
  int cur = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '0')
      buffer[cur++] = '0';
    else if (s[i] == '1')
      buffer[cur++] = '1';
    else
      cur = max(0, cur - 1);
  }

  for (int i = 0; i < cur; ++i) {
    cout << buffer[i];
  }
  cout << endl;

  return 0;
}