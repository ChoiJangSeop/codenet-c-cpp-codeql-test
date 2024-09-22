#include <iostream>
using namespace std;
int main(void){
    double r;
    
    cin >> r;
    
    double e = 2*r*3.14159265358979;
    double m = r*r*3.14159265358979;
    
    cout << fixed;
    cout << e <<" "<< m << endl;
    
    return 0;
}
