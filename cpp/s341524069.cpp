#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)n; i++)
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    
    vector<char> ans;
    rep(i,s.size()){
        if(s[i]=='0') ans.push_back('0');
        if(s[i]=='1') ans.push_back('1');
        if(s[i]=='B'&&ans.size()>0) ans.pop_back();
    }
    
    rep(i,ans.size()) cout << ans[i];
}
