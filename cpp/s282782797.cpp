#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(a < b) swap(a,b);
    if(a%b == 0) return b;
    else return (gcd(b,a%b));
}
int main() {
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y) << endl;
}
