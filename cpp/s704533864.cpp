#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double r, S, l, pi;
  cin >> r ;
  pi = 3.141592653589;
  S = pi * r * r;
  l = 2 * pi * r;
  cout << setprecision(9)<< S << " " << l << endl;

  return 0;
}
