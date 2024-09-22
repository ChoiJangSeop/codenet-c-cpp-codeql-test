#include<cstdio>
#include<iostream>
using namespace std;
void gcd(int a, int b)
{
  int ans = 0;
  if (a < b) swap(a, b);
  while(b > 0)
  {
    ans = a%b;
    a = b;
    b = ans;
  }
  printf("%d\n", a);
}

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  gcd(a, b);

  return 0;
}

