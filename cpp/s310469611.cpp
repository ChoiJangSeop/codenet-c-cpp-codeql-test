#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>

#define rep(i, n) for(int i=0;i<(int)(n);++i)

using namespace std;

template<class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

void trace(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

using ll = long long;
using P = pair<int, int>;

const unsigned long long INF = 1LL << 60;

////////////////////////////////////////////////////////////

int n;
int a[100];

int main() {
    cin >> n;
    rep(i, n) cin >> a[i];

    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
        if (i > 0) {
            cout << ' ';
        }
    }
    cout << endl;
}

