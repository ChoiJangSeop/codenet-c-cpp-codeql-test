#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
  stack<char >st;
  for(int i=0;i<(int)s.size();i++){
  	if(s[i]!='B')st.push(s[i]);
    else{
    	if(!st.empty())st.pop();
    }
  }
  vector<char >final;
  while(!st.empty()){
  	final.push_back(st.top());
    st.pop();
  }
  for(int i=final.size()-1;i>=0;i--)cout<<final[i];
}