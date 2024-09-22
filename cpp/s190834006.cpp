#include<iostream>
using namespace std;
long long gcd(long long x, long long y){
    int r = 0;
    if(x < y){
        swap(x, y);
    }
    while(y > 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x
}

int main(){
    long long x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    
    return 0;
}
