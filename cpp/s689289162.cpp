#include <bits/stdc++.h>
using namespace std;


int main () {

  double  W, H, x, y;
  
  cin >> W >> H >> x >> y;
 double maxArea = (double)(W*H*(double)(0.5000000));
 int count = (x == W/2 && y == H/2) ? 1 :0;

 std::cout << std::fixed << std::setprecision(6) << maxArea  << " " << count << std::endl;
  return 0;
}
