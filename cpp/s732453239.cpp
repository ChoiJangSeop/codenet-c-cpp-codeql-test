#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

using namespace std;
int main(){
    vector<int> v;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        // char ch=s[i];
        // if(ch>='0'&&ch<='9')cout<<ch<<endl;
        if(s[i]=='0')v.push_back(0);
        if(s[i]=='1')v.push_back(1);
        if(s[i]=='B'&&v.size()>0)v.pop_back();
    }
    // string ans="";
    for(int i=0;i<v.size()-1;i++){
        // ans+=v.at(i);
        cout<<v.at(i);
    }
    cout<<v.at(v.size()-1)<<endl;;
    // cout<<ans<<endl;
    // stack<int> s;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
}