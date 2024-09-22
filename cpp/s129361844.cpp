#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int W,H;
    float x,y;
    cin >> W >> H >> x >> y;

    cout << setprecision(35) << W*H/2.000000000 << " ";

    if(x == (float)W/2.000000000 && y == (float)H/2.000000000){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
}