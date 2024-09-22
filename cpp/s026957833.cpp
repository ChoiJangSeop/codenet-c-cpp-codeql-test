#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
  // read inputs
  long W, H, x, y;
  scanf("%ld %ld %ld %ld", &W, &H, &x, &y);

  // solve
  printf("%ld", max(min(x * H, (W - x) * H), min(W * y, W * (H - y))));
  if (2 * x == W && 2 * y == H) {
    printf(" 1\n");
  } else {
    printf(" 0\n");
  }
  
  return 0;
}
