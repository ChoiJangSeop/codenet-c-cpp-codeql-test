#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  deque<int> n;
  for (int i=0; i<s.size(); i++) {
    if (s.at(i)=='0') n.push_back(0);
    else if (s.at(i)=='1') n.push_back(1);
    else if(!n.empty()) n.pop_back();
  }
  for (int i=0; i<n.size(); i++) cout << n.at(i);
  cout << endl;
}