#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string n;
    cin >> n;
    for(char& c : n) c = c == '1' ? '9' : '1';
    cout << n << endl;
}