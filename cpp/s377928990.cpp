#include <iostream>
using namespace std;

int main() {
    int N;
    int A[200100];
    int maxVal = 0;
    int secondVal = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    for (int i = 0; i < N; ++i){
        if (maxVal < A[i]) {
                maxVal = A[i];
        }
        if (secondVal < A[i] < maxVal){
            secondVal = A[i];
        }

    }
    for (int i = 0; i < N; ++i){
        if (A[i] == maxVal) {
            cout << secondVal << endl;
        } else{
            cout << maxVal << endl;
        }
    }
    return 0;
}