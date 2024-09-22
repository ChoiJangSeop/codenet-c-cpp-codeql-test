#include <iostream>
#include <cmath>


static const double EPS = 1e-9;
using namespace std;

class Vector {
private:

public:
  double x, y;
  Vector():x(0), y(0){}; //Default constructor
  //Constructor
  Vector(double x_, double y_) {
    this->x = x_;
    this->y = y_;
  }
};


int main(){
  int W, H, x, y;
  cin >> W >> H >> x >> y;

  Vector p(x, y);
  Vector cent(W/2.0, H/2.0);

  double max_area = (W * H) / 2;
  int has_other = 0;

  if ((fabs(cent.x - p.x) < EPS) && (fabs(cent.y - p.y) < EPS)) {
    has_other = 1;
  }

  cout << max_area << " " << has_other << endl;

  return 0;
}
