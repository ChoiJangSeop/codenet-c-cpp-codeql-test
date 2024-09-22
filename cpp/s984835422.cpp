#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define sc(x) scanf("%d",&x);
int main(){
    string s, ans;
    cin >> s;
    int len = s.size();
    REP(i, len){
        if (s[i] == '0') ans += '0';
        else if(s[i] == '1') ans += '1';
        else ans.erase(ans.size() - 1);
    }
    cout << ans << endl;
    return 0;
}