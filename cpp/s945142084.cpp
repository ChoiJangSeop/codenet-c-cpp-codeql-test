#include <iostream>
using namespace std;
int main() {
    int n, a[105];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int i = n;
    cout << a[--i];
    while (i > 0) {
        cout << ' ' << a[--i];
    }
    cout << endl;
    return 0;
}

