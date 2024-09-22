#include<bits/stdc++.h>
using namespace std;
int main(){
    int W,H,x,y;
    cin >> W >> H >> x >> y;
    double areamax = W*H/2;
    int judge = 0;
    if (x == W/2 && y == H/2){
    judge = 1;
    }
    else{
    judge = 0;
    }
    cout << areamax << judge << endl;
}