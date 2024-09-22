#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>

typedef long long ll;

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i >= 0; i--){
        cout << a[i];
        if(i != 0){
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}