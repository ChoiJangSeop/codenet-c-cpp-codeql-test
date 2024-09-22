#include <stdio.h>
#include <algorithm>

int main(void){
  int x, y, z;
  scanf("%d, %d\n", x, y);
  z = gcd(x, y);

  printf("%d\n", z);
 
return 0;
}

int gcd(x, y){  
    if (x < y)
        swap(x, y);
    while (y > 0){
        r = x % y;
        x = y;
        y = r;

    return x;
    }
}


return 0;
}