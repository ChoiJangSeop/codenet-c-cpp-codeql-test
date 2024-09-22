#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  string ans = "";
  for (int i=0; i<s.length(); i++){
   	if (s[i] == '1'){
		ans.push_back('1');
    }
    else if (s[i] == '0'){
        ans.push_back('0');
    }
    else{
      if (!ans.empty()){
        ans.pop_back();
      }
    }
  }
  cout << ans;
  return 0;
}
  
