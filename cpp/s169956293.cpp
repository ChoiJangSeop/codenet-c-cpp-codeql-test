#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            if (max < A[j]) {
                max = A[j];
            }
        }
        cout << max << endl;
        max = 0;
    }

    return 0;
}