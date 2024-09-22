#include<bits/stdc++.h>
using namespace std;
int main() {
    double W,H,x,y;
    cin >> W >> H >> x >> y;
    if(W == x*2 && H == y*2) {
        cout << W*H/2 << " " << 1 << endl;
    }
    else {
        cout << W*H/2 << " " << 0 << endl;
    }
}