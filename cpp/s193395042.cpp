#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int inf = 1001001001;

int main(){
  string s;
  vector <char> ans;
  cin >> s;
  
  int n = s.size();
  rep(i,n){
    if(s[i] == '0') ans.push_back('0');
    if(s[i] == '1') ans.push_back('1');
    if(s[i] == 'B' && ans.size() != 0) ans.pop_back();
  }
  
  for(char c : ans) cout << c;
  cout << endl;
  
  
}