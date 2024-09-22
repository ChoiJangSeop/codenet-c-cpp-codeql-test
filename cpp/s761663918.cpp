#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  
  for(int i = 0; i < str.size(); i++) {
    if(str.at(i) == '1') str.at(i) = '9';
    else if(str.at(i) == '9') str.at(i) = '1';
  }
  
  cout << str << endl;
  return 0;
}