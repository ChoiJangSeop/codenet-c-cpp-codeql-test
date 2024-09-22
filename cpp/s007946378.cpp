#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s += '0';
    string ans;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0' && s[i+1] != 'B') {
            ans += '0';
        }
        if(s[i] == '1' && s[i+1] != 'B') {
            ans += '1';
        }
    }
    cout << ans << endl;
}

