#include <iostream>

char chage_number(char s);

int main() {

  std::string n;

  std::cin >> n;

  for (int i = 0; i < 3; i++) {
    if (n[i] == '1' || n[i] == '9') {
      n[i] = chage_number(n[i]);
    }
  }
  std::cout << n << std::endl;
}

char chage_number(char s) {
  if (s == '9') {
    return '1';
  }
  return '9';
}