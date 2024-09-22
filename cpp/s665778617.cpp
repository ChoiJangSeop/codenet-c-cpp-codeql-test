#include <iostream>
using namespace std;

int main(void) {
  int n;
  int a[200000];
  cin >> n;
  
  if(n < 2) return 1;
  
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  int max, semi_max;
  if(a[0] > a[1]) {
    max = a[0];
    semi_max = a[1];
  } else {
    max = a[1];
    semi_max = a[0];
  }
  
  for(int i = 2; i < n; i++) {
    if(a[i] > max) {
      semi_max = max;
      max = a[i];
    } else if(a[i] > semi_max) {
      semi_max = a[i];
    }
  }
  
  for(int i = 0; i < n; i++) {
    if(a[i] == max) {
      cout << semi_max << endl;
    } else {
      cout << max << endl;
    }
  }
  
  return 0;
}