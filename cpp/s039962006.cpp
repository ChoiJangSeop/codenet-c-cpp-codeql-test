#include <bits/stdc++.h>
using namespace std;


int main() {

  string s,t;
  cin >> s;
  
  for (auto i : s){
    if (i == '1')
      t += '1';
    
    else if (i == '0')
      t += '0';
    
    else if (t.size())
      t.pop_back();
    
  }
  cout << t;
    
  
  return 0;
}