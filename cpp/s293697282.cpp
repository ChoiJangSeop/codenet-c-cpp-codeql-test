#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n, a;

  int array[n];

  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> array[i];

  }


  for(int j = n - 1; j >= 0; j--)
  {
    if(j != n -1) cout << " ";
    cout << array[j];
  }

  cout << endl;

  return 0;
}