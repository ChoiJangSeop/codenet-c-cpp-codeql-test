#include <bits/stdc++.h>
 
using namespace std;

template<class T>
ostream& operator<<(ostream& os, vector<T> V) {
  os << "[";
  for (int i = 0; i < (int) V.size(); i++) {
    if (i > 0) {
      cout << ", ";
    }
    cout << V[i];
  }
  return os << "]\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> vec(n);
  for (int j = 0; j < n; j++) {
    cin >> vec[j].first;
    vec[j].second = j;
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < n; i++) {
    cout << vec[n - 1 - (vec[n - 1].second == i)].first << '\n';
  }
  return 0;
}
