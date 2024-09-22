#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            ans += '0';
        }
        if(s[i] == '1') {
            ans += '1';
        }
        if(s[i] == 'B'){
            s.substr(0 , s.size()-1);
        }
    }
    cout << ans << endl;
}