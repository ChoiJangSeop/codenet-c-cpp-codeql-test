#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n, s;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  
  for (int i = 0; i < n; i++) {
    cout << (s - a[i]) << endl;
  }
}
