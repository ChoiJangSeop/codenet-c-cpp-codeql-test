#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_N = 200000;

int A[MAX_N];
int s1[MAX_N];
int s2[MAX_N];


int main() {
  int N; cin >> N;
  for (int i{}; i < N; ++i) {
    cin >> A[i];
  }

  s1[0] = A[0];
  for (int i{1}; i < N; ++i) {
    s1[i] = max(s1[i-1], A[i]);
  }
  s2[N-1] = A[N-1];
  for (int i{N-2}; i >= 0; --i) {
    s2[i] = max(s2[i+1], A[i]);
  }

  cout << s2[1] << endl;
  for (int i{1}; i < N-1; ++i) {
    cout << max(s1[i-1], s2[i+1]) << endl;
  }
  cout << s1[N-2] << endl;

  return 0;
}
