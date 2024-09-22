#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  string s;
  cin>>s;
  int len=s.size();
  string ans="";
  for(int i=0;i<len;i++){
    if(s[i]=='B'&&ans.size()) ans.erase(ans.end()-1);
    if(s[i]!='B') ans+=s[i];
  }
  cout<<ans<<endl;
}
