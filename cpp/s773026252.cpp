#include <bits/stdc++.h>
using namespace std;

int a,b;

int main() {
  while (scanf("%d %d" ,&a ,&b) != EOF) {
    int i  = 0;
    a = a + b;
    while(a > 0) {
      a = a / 10;
      ++i;
    }
    
    cout << i << endl;
    
  }
}