#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string n; cin>>n;
    string ans = "";
    rep(i, 3){
        if(n[i]=='1'){
            ans += '9';
        } else if(n[i]=='9'){
            ans += '1';
        } else {
            ans += n[i];
        }
    }
    cout<<ans<<endl;
}