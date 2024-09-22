
#include <iostream>
#include <map>

#define INPUT_MAX 10000
#define NUM_MAX 100000000


int main(int argc, const char * argv[]) {
  int x, y;
  int other, amari;
  int divisor;
  divisor = 0;
  std::cin >> x >> y;
  if (x > y) {
    amari = x % y;
    other = y;
  } else {
    amari = y % x;
    other = x;
  }
  if (amari == 0) {
    std::cout << other << std::endl;
    return 0;
  }
  for (int i = other / 2; i > 0; i --) {
    if ((amari % i == 0) && (other % i == 0) ) {
      divisor = i;
      break;
    }
  }
  std::cout << divisor << std::endl;
  
  return 0;
}