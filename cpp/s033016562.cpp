#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack<char> ans;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='B' && ans.empty()!=true) ans.pop();
        else ans.push(str[i]);
    }
    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
    return 0;
}
