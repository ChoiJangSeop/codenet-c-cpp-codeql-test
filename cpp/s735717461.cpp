#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  double r; cin >> r;
  
  cout << fixed << setprecision(6) << r*r*M_PI << ' ' << r*2*M_PI << endl;
  return 0;
}