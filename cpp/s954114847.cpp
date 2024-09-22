#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void){
    int w, h, x, y;
    double tate1 = 0.0, tate2 = 0.0;
    double yoko1 = 0.0, yoko2 = 0.0;

    cin >> w >> h >> x >> y;
    tate1 = x * h;
    tate2 = (w - x) * h;
    yoko1 = w * y;
    yoko2 = w * (h - y);

    double a = 0.0, b = 0.0;
    if(tate1 >= tate2){
        a = tate1;
    } else {
        a = tate2;
    }
    if(yoko1 >= yoko2){
        b = yoko1;
    } else {
        b = yoko2;
    }

    if(a <= b){
        if(a == b){
            printf("%.6lf %d\n", a, 1);            
        } else {
            printf("%.6lf %d\n", a, 0);
        }
    } else {
        printf("%.6lf %d\n", b, 0);
    }
}