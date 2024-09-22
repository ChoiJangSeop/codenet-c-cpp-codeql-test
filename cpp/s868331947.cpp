#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> ADash(N);
    for(int i = 0; i < N; i++){
        cin>>A[i];
        ADash[i] = -1 * A[i];
    }

    sort(ADash.begin(),ADash.end());

    for(int i : A){
        if(i == A[0])cout<<ADash[1] * -1<<endl;
        else cout<<ADash[0] * -1<<endl;
        // cout<<i<<" ";
    }
}