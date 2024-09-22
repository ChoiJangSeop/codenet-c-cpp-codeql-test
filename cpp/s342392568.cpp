#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
int main(void)
{
  double r;
  std::cin >> r;
  std::cout << std::fixed << std::setprecision(6) << r * r * M_PI << " " << 2 * r * M_PI << std::endl;
}