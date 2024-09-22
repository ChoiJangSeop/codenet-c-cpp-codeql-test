#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
  int i;
  int a,b;
  while(scanf("%d %d",&a, &b) != EOF) {
    int c = a+b;
    printf("%d\n",c);
    for(i = 1; i < 9; i++) {
      if(c/(int)pow(10,i) == 0) {
	printf("%d\n",i);
	break;
      }
    }
  }

  return 0;
}