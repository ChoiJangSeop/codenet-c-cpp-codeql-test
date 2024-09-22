#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  vector<char> ans;
  
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      ans.push_back('0');
    }
    else if(s[i]=='1'){
      ans.push_back('1');
    }
    else if(ans.size()!=0){
      ans.erase(ans.end()-1);
    }
    
  }
  for(auto& c:ans){
    cout<<c;
  }
}