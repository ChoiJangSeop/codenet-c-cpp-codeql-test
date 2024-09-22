#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a+n);

    for (int i = 0; i < n; i++) {
        if (b[i] != a[n-1]) {
            cout << a[n-1] << endl;
        } else {
            cout << a[n-2] << endl;
        }
    }
    
    return 0;
}