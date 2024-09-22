#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    for(char &c : s) {
        if(c == '1') c = '9';
        else if(c == '9') c = '1';
    }
    cout << s << endl;
}
