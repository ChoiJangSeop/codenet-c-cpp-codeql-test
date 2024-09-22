#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    vector<int> D(N);
    D = A;
    sort(A.begin(), A.end());

    vector<int> B(N);
    if (A[N - 2] == A[N - 1]) {
        for (int i = 0; i < N; ++i) {
            B[i] = A[N - 1];
        }
    } else {
        for (int i = 0; i < N; ++i) {
            if (D[i] == A[N - 1]) {
                B[i] = A[N - 2];
            } else {
                B[i] = A[N - 1];
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        cout << B[i] << endl;
    }
    return 0;
}