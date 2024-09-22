#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    double w,h,x,y,c=0;
    
    cin>>w>>h>>x>>y;
    if(2*x==w and 2*y==h) {
        c = 1;
    }

    cout<<(w*h)/2<<" "<<c<<"\n";
    return 0;
}