#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i){
        cin >> A[i];
        B[i] = A[i];
    }

    sort(begin(B), end(B));

    for(int i = 0; i < N; ++i){
        if(B[N-1] == A[i]){
            cout << B[N-2] << endl;
        }else{
            cout << B[N-1] << endl;
        }
    }
}