#include<iostream>
using namespace std;
int main(){
  int N, A[200000], sA[200000];
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> A[i];
    sA[i] = A[i];
  }
  sort(sA, sA+N, greater<int>());
  for(int i=0; i<N; i++){
    int j=0;
    if(A[i] == sA[0]) cout << sA[1] << endl;
    else cout << sA[j] << endl;
  }
  return 0;
}