#include <iostream>
#include <string>

int main()
{
  str s;
  std::cin >> s;
  int i;
  std::str ans = "";
  for (i = 0; i < s.size(); i++) {
    if (s[i] == '0' || s[i] == '1') ans += s[i];
    if (s[i] == 'B') ans.pop_back;
  }
  std::cout << ans;
  return 0;
}
