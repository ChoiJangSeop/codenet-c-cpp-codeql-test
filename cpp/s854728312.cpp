#define _USE_MATH_DEFINES
#include <math.h>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
  double r;
  cin >> r;
  double m = r*r*M_PI;
  double e = r*2*M_PI;
  cout << fixed;
  cout << setprecision(6) << m << " " << e << endl;
}

