#include <cstdio>
#include <iostream>
#include <iomanip>
#include <math.h> 

using namespace std;
int main(){
  int r;
  cin >> r;
  cout << fixed << setprecision(6) << r*r*M_PI << " " <<  fixed << setprecision(6) << 2 * M_PI * r << endl;

}