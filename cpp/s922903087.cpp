/*|In The Name Of Allah|*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
const int mod = 1e9+7;

int h , w;
int x , y;


int main(){
    cin >> w >> h >> x >> y;
    cout << fixed << setprecision(10) << (1.000 * w * h) / 2 << " ";
    if(w % 2 == 0 && h % 2 == 0 && x == w/2 && y == h/2){
        cout << 1;
    } else {
        cout << 0;
    }

}