#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i < (int) n; i++)
using ll = long long;

int main(){
  string s;
  stack<char>st;
  cin >> s;
  rep(i,s.size()){
    if(s[i]!='B')
      st.push(s[i]);
    else if(!st.empty())
      st.pop();
  }
  int st_size = st.size();
  rep(i,st_size){
    cout << st.top();
    st.pop();
  }
  return 0;
}