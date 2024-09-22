#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
#define rep(i,n) for(int i = 0; i < ((int)(n)); i++)   // 0-indexed昇順

int main() {
    double W,H,x,y;
    cin >> W >> H >> x >> y;
    double A1 = 0, A2 = 0;
    if (W != x) {
        if (W/2 < x) {
            A1 = (W-x) * H;
        } else {
            A1 = x * H;
        }
    }
    if (H != y) {
        if (H/2 < y) {
            A2 = (H-y) * W;
        } else {
            A2 = y * W;
        }
    }
    cout << fixed << setprecision(6);
    cout << ((A1 > A2) ? A1 : A2) << " ";
    cout << (W/2 == x && H/2 == y) << endl;
}