#include <cstdio>

int main() {
  double r;
  scanf("%lf", &r);

  double PI = 3.141592653589;
  printf("%f %f\n", PI * r * r, 2 * PI * r);
  
  return 0;
}
