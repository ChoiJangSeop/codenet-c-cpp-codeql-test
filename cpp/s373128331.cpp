#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    deque<char> dq;
    rep(i, s.length()) {
        if ( s[i] == '0' || s[i] == '1' ) {
            dq.push_back(s[i]);
        }
        else if ( dq.empty() ) {
            continue;
        }
        else if ( s[i] == 'B' ) {
            dq.pop_back();
        }
    }
    int dq_size = dq.size();
    rep(i, dq_size) {
        cout << dq.front();
        dq.pop_front();
    }
    cout << endl;
    return 0;
}