#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int i;
    char c[16] = "\0";
    cin >> c;
    for (i = 0; i < sizeof(c)-1; i++){
        if(c[i] != 'B' && c[i+1] != 'B'){
            cout << c[i];
        }
    }
    if(c[i] != 'B'){
        cout << c[i];
    }
    cout << endl;

    return 0;
}