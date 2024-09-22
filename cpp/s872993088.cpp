#include <bits/stdc++.h>
using namespace std;
#define ll long int

ll ans = 0;

const int N = 26;
ll x[N] = {},y[N] = {};

int main(){
    string s;
    int n = 3;
    cin >> s;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1')cout << 9;
        else if(s[i] == '9') cout << 1;
        else cout << s[i];
    }
    cout << endl;
}