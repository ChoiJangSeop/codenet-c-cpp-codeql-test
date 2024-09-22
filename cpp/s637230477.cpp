#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double r;
  cin >> r;
  printf("%.6f %.6f\n", M_PI*r*r,2*M_PI*r);
  return 0;
}