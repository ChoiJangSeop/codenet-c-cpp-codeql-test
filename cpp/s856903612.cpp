#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < 3; i++) {
    if(s[i] == '1') s[i] = '9';
    else if(s[i] == '9') s[i] = '1';
  }
  cout << s << "\n";
}
