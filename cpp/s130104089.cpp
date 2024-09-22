#include <cstdio>
#include <iostream>
#include <deque>
using namespace std;

int main(){
  deque<int> st;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'B') {
      if (st.empty()) continue;
      st.pop_back();
    }
    else st.push_back(s[i]-'0');
  }

  for (int i = 0; i < st.size(); i++) {
    cout << st[i];
  }
  cout << endl;
  return 0;
}