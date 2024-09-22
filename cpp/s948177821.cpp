#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    
    long long w,h,x,y;
    cin >> w >> h >> x >> y;
    
    if(x==(w/2)&&y==(h/2)){
        cout << fixed << setprecision(6) << (w*h)/2.0 << " "<< 1<< endl;
    }else{
        cout << fixed << setprecision(6) << (w*h)/2.0 << " "<< 0<< endl;
    }

}