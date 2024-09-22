#include "bits/stdc++.h"
using namespace std;

int gcd(int a, int b)
{
  int max = a > b ? a : b;
  int n = 2;

  for (; n <= max; n++)
  {
    if (a % n == 0 && b % n == 0)
    {
      return n * gcd(a / n, b / n);
    }
  }

  return 1;
}

int main()
{
  int a, b;
  cin >> a >> b;

  int common = gcd(a, b);
  cout << common << endl;

  return 0;
}

