#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    double r;
    cin >> r;
    
    cout << fixed << setprecision(5) << r*r*M_PI << ' ' << r*2*M_PI <<endl;
    
    return 0;
}
