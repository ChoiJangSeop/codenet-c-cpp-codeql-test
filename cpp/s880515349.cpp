#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }
    vector<int> hani(N+1);
    hani[0] = 0;
    for(int i = 0; i < N; i++){
        hani[i+1] = max(A[i+1], hani[i]);
    }

    vector<int> gyaku(N+1);
    gyaku[N+1] = 0;
    for(int i = N; i > 0; i--){
        gyaku[i] = max(A[i], gyaku[i+1]);
    }

    for(int i = 1; i <= N; i++){
        int ans = max(hani[i-1], gyaku[i+1]);
        cout << ans << endl;
    }
}