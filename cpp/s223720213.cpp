#include <bits/stdc++.h>
using namespace std;

int main(){
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    double s = double(w * h) / 2.0;
    int judge = 0;
    if( 2 * x == w && 2 * y == h){
        judge = 1;
    }
    
    cout << s << " " << judge << endl;
}