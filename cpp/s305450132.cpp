#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<a.size(); i++){
        cin >> a.at(i);
    }
    for(int i=0; i<a.size(); i++){
        if(i) cout << " ";
        cout << a.at(a.size()-i-1);
    }
    cout << endl;
    return 0;
}

