#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for( int i = 0; i < n; i++ ){
        cin >> c[i];
    }
    for( int i = n-1; i > 0; i-- ){
        cout << c[i] << ' ';
    }
    cout << c[0] << endl;
}