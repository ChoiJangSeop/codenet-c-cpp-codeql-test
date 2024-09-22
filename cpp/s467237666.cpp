#include <bits/stdc++.h>

using namespace std;


int main()
{
  string S;
  cin >> S;
  string T;
  for(auto &c : S) {
    if(T.empty() && c == 'B') continue;
    if(c == 'B') T.pop_back();
    else if(c == '1') T += "1";
    else T += "0";
  }
  cout << T << endl;
}