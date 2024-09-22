#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void print_vec(vector<int> vec)
{
  cout << "[";
  for (int i = 0; i < vec.size(); i++)
  {
    if (i)
    {
      cout << ", ";
    }
    cout << vec.at(i);
  }
  cout << "]...size: " << vec.size() << endl;
}

int main()
{
  int n;
  cin >> n;

  vector<int> vec(n);
  rep(i, n)
  {
    cin >> vec.at(i);
  }

  reverse(all(vec));

  rep(i, n)
  {
    if (i)
    {
      printf(" ");
    }
    printf("%d", vec.at(i));
  }

  printf("\n");
}

