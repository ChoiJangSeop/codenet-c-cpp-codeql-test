#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string s;
  cin >> s;

  int pos = 0;
  int result[15];

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '0')
    {
      result[pos] = 0;
      pos++;
    }
    else if (s[i] == '1')
    {
      result[pos] = 1;
      pos++;
    }
    else if (s[i] == 'B')
    {
      pos--;
      if (pos < 0)
        pos = 0;
    }
  }

  for (int i = 0; i < pos; i++)
  {
    cout << result[i];
  }

  cout << endl;

  return 0;
}