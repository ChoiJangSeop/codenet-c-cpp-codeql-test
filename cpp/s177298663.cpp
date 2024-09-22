#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int>A(N);
    for (int i = 0; i < N; ++i) {
      cin >> A[i];
    }
    int first = 0;
    int second = 0;
    for (int i = 0; i < N; ++i) {
        if(A[i] >= A[first]){
            second = first;
            first = i;
        } else if(A[i] > A[second]){
            second = i;
        }
    }
    for (int i = 0; i < N; ++i) {
        if(i != first){
            cout << A[first] << "\n";
        }else{
            cout << A[second] << "\n";
        }
    }
    return 0;
}