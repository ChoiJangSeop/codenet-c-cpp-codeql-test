#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<functional>
#include<map>
#include<set>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

map<string, int> mp;

int main() {
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (s[i] == 'B')s[i--] == ' ';
    }
    rep(i, s.size()) {
        if (s[i] == '1' || s[i] == '0') {
            cout << s[i];
        }
    }
    cout << endl;
}