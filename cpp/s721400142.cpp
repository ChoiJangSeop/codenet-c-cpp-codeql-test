#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
static const int MAX = 200000;

int main() {
    int N, A[MAX], S[MAX];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int a; cin >> a;
        A[i] = S[i] = a;
    }

    sort(S, S + N, greater<>());

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i] != S[j] || j == N - 1) {
                cout << S[j] << endl;
                break;
            }
        }
    }

    return 0;
}
