#include <bits/stdc++.h>
using namespace std;
int a[105];
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i > 0; i++) cout << a[i] << " ";
    cout << a[0] << endl;
}
