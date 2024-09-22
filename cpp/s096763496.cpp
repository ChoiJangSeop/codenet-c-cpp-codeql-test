#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  std::vector<int> v;
  string s;cin>>s;
  for(int i=0;i<(int)s.length();i++){
      if(s[i]=='0') v.push_back(0);
      else if(s[i]=='1') v.push_back(1);
      else v.pop_back();
  }
  for(int i=0;i<(int)v.size();i++) cout<<v[i];
  cout<<endl;
}
