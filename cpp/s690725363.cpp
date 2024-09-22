#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int a, b;
  stringstream ss;
  while (cin >> a >> b) {
    ss << a + b;
    cout << ss.str().size() << endl;
  }
  return 0;
}