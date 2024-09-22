#include <cstdlib>
#include <iostream>
#include <string>


int
main()
{
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  std::string s;
  std::cin >> s;
  std::string answer = s;
  for (decltype(s)::size_type i = 0, j = 0; i < s.length(); i++) {
    if (s[i] != 'B') {
      answer[j++] = s[i];
    } else if (j > 0) {
      answer[j--] = '\0';
    } else if (s[i] == 'B') {
      answer[j] = '\0';
    }
  }
  std::cout << answer.c_str() << std::endl;

  return EXIT_SUCCESS;
}
