#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &i:A) cin >> i;
  vector<int>::iterator iter = max_element(A.begin(), A.end());
  size_t index = distance(A.begin(), iter);
  int fst = A[index];
  int flg = 0;
  for (int i = 0; i < N; i++){
    if (A[i] == A[index] && i == index){
      flg = 1;
      break;
    }
  }
  int snd = 0;
  for (int i = 0; i < N; i++)
    if (A[i] != fst && A[i] > snd)
      snd = A[i];
  for (int i = 0; i < N; i++){
    if (A[i] == fst && flg == 0)
      cout << snd << endl;
    else
      cout << fst << endl;
  }
  return 0;
}