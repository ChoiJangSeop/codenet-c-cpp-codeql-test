#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string st;
    int x;
    cin >> x;

    st = to_string(x);

    for (int i = 0; i < st.length(); i++){
        if (st[i] == '1') cout << '9';
        else cout << '1';
    }

    return 0;
}

