#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W, x, y; cin >> H >> W >> x >> y;
    double ans = (double)H * W / 2;
    int num = (W == x + x && H == y + y) ? 1 : 0;
    printf("%.10f %d\n",ans,num);
}