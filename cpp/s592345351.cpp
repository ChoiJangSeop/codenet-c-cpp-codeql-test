#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
int main(){
    string s,ans;
    cin >> s;
    int n = s.size();
    REP(i,n){
        if(s[i] == '0' || s[i] == '1')ans += s[i];
        else if(ans.size() > 0) ans.pop_back();
    }
    cout << ans << endl;
}