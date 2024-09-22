#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  double x;
  cin>>x;
  cout<<fixed;
  cout<<setprecision(6)<<x*x*M_PI<<" "<<2*x*M_PI<<"\n";
}