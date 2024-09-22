#include<bits/stdc++.h>
using namespace std;

int main(void){
  string s, ans="";cin >> s;
  for(int i=0;i<s.size();i++){
    char c=s.at(i);
    if(c!='B'){
      ans+=c;
    }else if(ans != ""){
      ans.pop_back();
    }
  }
  cout << ans << endl;
}
