# include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n] = {};
    for (int i = n - 1; i >= 0; --i) cin >> a[i];
    
    for (int i = 0; i < n - 1; ++i) cout << a[i] << " ";
    cout << a[n - 1] << endl;
    return 0;
}
