#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    rep(i,3){
        if(s[i]=='1'){
            s[i] = '9';
        }else{
            s[i] = '1';
        }
    }
    cout << s << endl;
}
