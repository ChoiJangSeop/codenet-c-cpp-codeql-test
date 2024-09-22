#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdlib>
#include<queue>

using namespace std;

#define rep(i, n) for(long int i = 0; i < n; i++)


int main(){
    string s;
    cin >> s;
    string ans;
    rep(i, s.size()){
        if(s[i] == '0'){
            ans += '0';
        }else if(s[i] == '1'){
            ans += '1';
        }else if(s.size() > 0){
            ans.pop_back();
        }
    }
    cout << ans << endl;
}
