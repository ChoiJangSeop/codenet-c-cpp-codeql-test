#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(void){
    double r,S,l;
    cin >> r;
    S=M_PI*r*r;
    l=2*M_PI*r;
    cout << fixed << setprecision(6) << S << " " << l << endl;
}

