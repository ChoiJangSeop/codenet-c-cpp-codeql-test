#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void){
    double r;
    cin >> r;
    
    double s = M_PI * (r * r);
    double circumference = 2 * M_PI * r;
    
    cout << fixed << setprecision(6) << s << " " << circumference << endl;
    
    return 0;
}

