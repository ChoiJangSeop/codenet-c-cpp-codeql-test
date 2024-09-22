#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> ans(s.length());
    for (char c : s) {
        switch (c) {
            case '0':
                ans.push_back('0');
                break;
            case '1':
                ans.push_back('1');
                break;
            case 'B':
                ans.pop_back();
                break;
        }
    }
    for (char c : ans) cout << c;
}
