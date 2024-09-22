#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1') cout << '9';
        else if (s[i] == '9') cout << '1';
        else cout << s[i];
    }
    cout << '\n';
    return 0;
}