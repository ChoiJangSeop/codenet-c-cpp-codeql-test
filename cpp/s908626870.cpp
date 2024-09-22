// C++ 14
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <math.h>

#define ll long long
#define Int int
#define loop(x, start, end) for(Int x   = start; x < end; x++)
#define loopdown(x, start, end) for(int x = start; x > end; x--)
#define span(a,x,y) a.begin()+x,a.begin()+y
#define span_all(a) a.begin(),a.end()
#define len(x) (x.size())
#define last(x) (*(x.end()-1)) 

using namespace std;

Int X, Y;

Int gcd(Int x, Int y) {
  if (x > y) swap(x, y);
  
  Int r;
  while (y > 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

void input() {
  cin >> X >> Y;
}

void solve() {
  cout << gcd(X, Y) << endl;
}

int main() {
  input();
  solve();
  return 0;
}
