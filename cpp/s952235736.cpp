#include <iostream>
using namespace std;

// {{{ put
void newline() {cout << endl;}
template <typename T> void display(T input){cout << input;}
template <typename T> void put(T input){display(input); newline();}
// }}}

int digit_num(int n){
  return n >= 10 ? 1 + digit_num(n / 10)
                 : 1;
}

int main() {
  int a, b;
  while(cin >> a){
    cin >> b;
    put(digit_num(a + b));
  }
}