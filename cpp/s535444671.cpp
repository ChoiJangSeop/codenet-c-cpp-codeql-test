#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <regex>
#include <cctype>

#define REP(i, n) for (int i = 0; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

using namespace std;

typedef long long ll;

int main()
{
  char c[3];
  REP(i, 3)
  {
    cin >> c[i];
  }
  REP(i, 3)
  {
    if (c[i] == '1')
    {
      c[i] = '9';
    }
    else if (c[i] == '9')
    {
      c[i] = '1';
    }
  }
  cout << c[0] << c[1] << c[2] << endl;
  return 0;
}