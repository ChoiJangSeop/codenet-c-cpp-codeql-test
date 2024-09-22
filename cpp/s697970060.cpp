#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int W, H, x, y;
    cin >> W >> H >> x >> y;
    long long int hor = min(H * x, H + (W - x));
    long long int ver = min(W * y, W * (H - y));
    char type = '0';
    if(hor == ver) {
        type = '1';
    }
    cout <<fixed << setprecision(6) << (double)max(hor, ver) << " " << type << endl;
    return 0;
}