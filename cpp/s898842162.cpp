#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> vec(N);
  for (long long i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  
  sort(vec.begin(), vec.end());
  long long m1 = vec.at(N-1);
  long long m2 = vec.at(N-2);
  
  for (long long i = 0; i < N; i++) {
    if (vec.at(i) == m1) {
      cout << m2 << endl;
    }
    else {
      cout << m1 << ebdl;
    }
  }
  
  
}

