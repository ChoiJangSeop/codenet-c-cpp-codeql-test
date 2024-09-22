#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double r;

int main(void){
    cin>>r;
    
    cout<<fixed<<setprecision(6)<<M_PI * r * 2<<endl;
    
    return 0;
}
