#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        if ( i == n - 1)
            cout << a.at(i) << endl;
        else
            cout << a.at(i) << " ";
    }
}

