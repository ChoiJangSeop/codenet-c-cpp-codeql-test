#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;
    for (char c : s) cout << (c == '1' ? '9' : '1');
    cout << "\n";
}