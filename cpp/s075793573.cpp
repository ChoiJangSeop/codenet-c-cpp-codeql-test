#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    string s;
    stack<char> ans;
    cin>>s;
    int hoge=0;
    rep(i,s.size()){
        char temp= s[i];
        if(s[i]=='B'){
            if(ans.empty()==true) continue;
            else ans.pop();
        } else ans.push(temp);
    }
    stack<char > buf;
    while(ans.empty()!=true) {
        buf.push(ans.top());
        ans.pop();
    }
    while(buf.empty()!=true){
        cout<<buf.top();
        buf.pop();
    }
    cout<<endl;
    return 0;
}