#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i<s.size();i++){
        if(s.at(i) == '0') ans += '0';
        if(s.at(i) == '1') ans += '1';
        if(s.at(i) == 'B' && ans.size() != 0) ans.erase(ans.size()-1);         
    }
    cout << ans << endl;
    return 0;
}