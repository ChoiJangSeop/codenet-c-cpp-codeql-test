#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;

int main(){
    long double w, h, x, y, a, b;
    cin >> w >> h >> x >> y;

    if(x > 0 && y > 0){
        a = w * y;
        b = h * x;
        if(a > b) cout << b;
        else cout << a;
    }else if(x < 0 && y > 0){
        a = w * y;
        b = w * (h - y);
        if(a > b) cout << b;
        else cout << a;
    }else if(y < 0 && x > 0){
        a = x * h;
        b = (w - x) * h;
        if(a > b) cout << b;
        else cout << a;
    }else{
        cout << w * h / 2;
    }

    //int el = 0;
    //if((w/2 == x) && (h/2 == y)) el = 1;
    //else if((y <= 0) && (x <= 0 || w <= x)) el = 1;
    //else if((y >= h) && (x <= 0 || w <= x)) el = 1;
    //else el = 0;


    int el;
    if(x == y) el = 1;
    else if(a == b) el = 1;
    else el = 0;

    //if((0 < x && x < w) || (0 < y && y < h)) el = 0;
    //if((w/2 == x) && (h/2 == y)) el = 0;
    //else if((y <= 0) && (x <= 0 || w <= x)) el = 1;
    //else if((y >= h) && (x <= 0 || w <= x)) el = 1;
    //else el = 0;

    cout << ' ' << el << endl;
    return 0;
}
