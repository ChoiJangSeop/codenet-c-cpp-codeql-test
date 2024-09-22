#include<iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    // cout << n << endl;a

    int ary[n];

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ary[i] = x;
    }

    for(int i = n - 1; 0 < i; i--){
        cout << ary[i] << " ";
    }
    cout << endl;

    return 0;
}
