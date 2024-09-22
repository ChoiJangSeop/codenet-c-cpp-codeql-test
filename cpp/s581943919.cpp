#include <iostream>
using namespace std;

int main(){
    int n,*p,*q;
    cin >> n;
    p = new int [n];
    q = new int [n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    for (int i = 0; i < n; i++){
        q[n-1-i] = p[i];
    }
    for (int i = 0; i < n; i++){
        cout << q[i];
        if(i != (n-1)){
            cout << " ";
        }
    }
    cout << endl;
    delete [] p;
    delete [] q;
}
