#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    long long x, y; cin>>x>>y;
    if(x<y) swap(x, y);
    while(y){
        long long temp;
        temp = y;
        y = x%y;
        x = temp;
    } 
    cout << x <<endl;
    return 0;
}
