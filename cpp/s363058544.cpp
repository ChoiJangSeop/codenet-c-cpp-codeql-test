#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    while (cin >> a >> b) {
        cout << floor(log10(a + b)) + 1 << endl;
    }
    return 0;
}