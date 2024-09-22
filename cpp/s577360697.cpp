#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    for(int i=0; i<n; i++){
        if(i!=n-1) cout << v[i] << " ";
        else cout << v[i] << endl;
    }

    return 0;
}
