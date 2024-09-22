#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll max1 = 0, max2 = 0;
    for(int i = 0; i < N;i++) {
        cin >> A[i];
        if(A[i] > max1) max1 = A[i];
        else if(A[i] > max2) max2 = A[i];
    }
    for(int i = 0; i < N; i++){
        if(A[i] == max1) cout << max2 << endl;
        else cout << max1 << endl;
    }
    return 0;
}