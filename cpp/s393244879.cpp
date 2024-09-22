#include <iostream>
using namespace std;
int main (){
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    bool jud=0;
    double s=(double)w*h/2;
    if(x==w/2&&y==h/2) jud=1;
    cout << (double)s << " " << jud << "\n";
}