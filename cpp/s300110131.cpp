#include<bits/stdc++.h>

#define REPI(i, n) for(int i = 0; i < n; i++)
#define REPJ(j, n) for(int j = 0; j < n; j++)

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;
    REPI(i, s.length()){
        if(s[i + 1] != 'B' && s[i] != 'B'){
            if(s != ""){
                s.pop_back();
                cout << s[i];
            }
        }
    }
}
