#include <bits/stdc++.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int a[n];
    int m1 = 0, m2 = 0;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(m1 < a[i]){
            m2 = m1;
            m1 = a[i];
        }
        else if(m2 < a[i]){
            m2 = a[i];
        }
    }
    for(i = 0; i < n; i++){
        if(m1 != a[i]){
            cout << m1 << endl;
        }
        else{
            cout << m2 << endl;
        }
    }
}