#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

int main(){
    string s; cin >> s;
    string ans;
    rep(i,s.size()){
        if(s[i] == '1' || s[i] == '0'){
            ans.push_back(s[i]);
        }else if(s[i] =  'B' && ans.size() > 0){
            ans.pop_back();
        }
    }

    cout << ans << endl;
}