#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define repr(i,n) for(int i = (int)(n); i >= 0; i--)
#define all(v) v.begin(),v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    vector<string> vec(0);
    int len_s = s.size();
    rep(i,len_s){
        if (s[i] == '0'){
            vec.push_back("0");
        }
        else if (s[i] == '1'){
            vec.push_back("1");
        }
        else if (s[i] == 'B'){
            if (vec.size() == 0){
                continue;
            }
            vec.pop_back();
        }
    }
    int len_v = vec.size();
    rep(i,len_v){
        cout << vec[i];
    }
    cout << endl;
}
