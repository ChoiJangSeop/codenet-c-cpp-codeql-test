#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
#include "math.h"
#include "cstring"
#include "stack"
#include "queue"

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<vector<int> > mat;

int main()
{
  string s;
  cin >> s;
  int size = s.size();
  string ans = "";
  for (int i = 0; i < size; i++)
  {
    if (s[i] == 'B')
    {
      if (ans.size() != 0)
      {
        ans.erase(ans.begin()+ans.size()-1);
      }
    }
    else
    {
      ans = ans + s[i];
    }
  }
cout << ans << "\n";
}