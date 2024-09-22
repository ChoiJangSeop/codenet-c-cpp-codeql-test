#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    int mx1 = 0;
    int mx2 = 0;

    for(int i=0; i<N; i++){
        if(mx1 < A[i]){
            mx2 = mx1;
            mx1 = A[i];
        }else{
            if(mx2 < A[i]){
                mx2 = A[i];
            }
        }
    }
    for(int i=0;i<N;i++){
        if(A[i] != mx1){
            cout << mx1 << endl;
        }else{
            cout << mx2 << endl;
        }
    }

    return 0;
}