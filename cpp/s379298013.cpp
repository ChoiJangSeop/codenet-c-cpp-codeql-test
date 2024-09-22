#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
  cin>>s;
  stack<char>S;
  int N=s.size();
  for(int i=0;i<N;i++){
  if(s.at(i)!='B')
    S.push(s.at(i));
    else {
    if(!S.empty())
      S.pop();
    }
  
  }int M=S.size();
  string ans="";
  for(int i=0;i<M;i++){
    ans=S.top()+ans;
    S.pop();
  }
  cout<<ans<<endl;
   return 0;
}
  cout<<ans<<endl;
   return 0;
}