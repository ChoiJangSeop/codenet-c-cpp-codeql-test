#include <iostream>
using namespace std;

int main() {
  char c;
  for (int i=0; i<3; i++) {
    cin >> c;
    if (c == '1') cout << '9' << flush;
    else cout << '1' << flush;
  }
  cout << endl;
}