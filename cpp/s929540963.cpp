#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    for(int i=0;i<3;i++){
        if(s[i]=='9'){
            ans += '1';
        }else{
            ans += '9';
        }
    }
    cout << ans;
}