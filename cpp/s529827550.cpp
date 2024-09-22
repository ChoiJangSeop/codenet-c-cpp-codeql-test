#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b;
  while(scanf("%d%d", &a, &b) != EOF) {
    int c = a + b;
    int d = (int)log10(c);
    printf("%d\n", d);
  }
  return 0;
}
