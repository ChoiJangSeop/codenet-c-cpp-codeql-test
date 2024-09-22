#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

template <class T>
using vc = vector<T>;

using vi = vector<int>;

int main() {
    cout << setprecision(20) << fixed;
    int n;
    cin >> n;

    auto a = vi(n);

    for (auto i = std::size_t(0); i < n; ++i) {
        cin >> a[i];
    }

    for (auto i = n-1; i > 0; --i) {
        cout << a[i] << " ";
    }
    cout << a[0] << "\n";
    return 0;
}

