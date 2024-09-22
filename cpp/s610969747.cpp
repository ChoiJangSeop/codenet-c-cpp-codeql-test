#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>

int main(){
    float r, a, b;
    cin >> r;
    a = r*r*M_PI;
    b = 2*r*M_PI;
    cout << a << " " << b <<endl;
    return 0;
}