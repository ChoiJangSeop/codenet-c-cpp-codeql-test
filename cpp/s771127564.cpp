#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long w, h, x, y;
    cin >> w >> h >> x >> y;

    long double s = 0;
    int d = 0;
    if((x == 0 && y == 0) || (x == 0 && y == h) 
    || (x == w && y == 0) || (x == w && y == h)){
        s = (double)(w*h)/(double)2;
        d = 0;
    } else {
        if((w*y == x*h) || (h*x + w*y == w*h)){
            s = (double)(min(h*x, (w-x)*h));
            d = 1;
        } else {
            if(x == 0 || x == w){
                s = (double)(min(y*w, (h-y)*w));
                d = 0;
            } else if(y == 0 || y == h){
                s = (double)(min(x*h, (w-x)*h));
                d = 0;
            } else {
                s = (double)(max(min(x*h, (w-x)*h),min(y*w, (h-y)*w)));
                d = 0;
            }
        }
    }
    cout << fixed << setprecision(9) << s << " " << d << endl;
    return 0;
}