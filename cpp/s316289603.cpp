#include <iostream>
using namespace std;

int main() {
  string a;
  cin >> a;
  string b = "b";
  int g = 0;
  for(int i = 0; i <= a.size() - g; i++) {
    if(a[i] == b[0]){
      a = a.erase(i - 1, 2);
      i -= 2;
      g += 2;
    };
  }
  cout << a << endl;
}
