#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cctype>        // isupper, islower, isdigit, toupper, tolower
#include <memory>        // unique_ptr, shared_ptr, weak_ptr

using namespace std;

using ll = long long int;
using vi = vector<int>;
using vvi = vector<vi>;

#define _LIBCPP_DEBUG 0
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

const int INF = 1<<30;
const ll MOD = 1000000007;

int main() {
  int n, a;
  cin >> n;

  vector<int> v;
  for (size_t i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }

  reverse(v.begin(), v.end());
  for (size_t i = 0; i < n; i++) {
    cout << v.at(i);
    if (i != n-1) cout << " ";
  }
  cout << endl;

  return 0;		 
}
