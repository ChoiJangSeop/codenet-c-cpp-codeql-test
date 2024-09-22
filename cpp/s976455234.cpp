#include <iostream>
#include <iomanip>
using namespace std;


int main(void){

double r,m,l;
cin >> r;

m = (r *2) * 3.14159265358;
l = r * r * 3.141592653589;

 cout << std::fixed <<  std::setprecision(6) <<l  << " " << m << endl; 
// printf("%f %f\n", l,m);
}

