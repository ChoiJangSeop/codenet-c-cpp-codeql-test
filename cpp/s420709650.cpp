#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
  int N; cin >> N;
  vector<int> A(N);
  vector<int> sorted(N);
  
  for (auto i = 0; i < N; i++)
    cin >> A[i];
  
  copy(A.begin(), A.end(), sorted.begin());
  sort(sorted.begin(), sorted.end());

  for (auto i = 0; i < N; i++) {
    if (A[i] == *sorted.end()) cout << sorted[N-2] << endl;
    else cout << sorted[N-1] << endl;
  }
}