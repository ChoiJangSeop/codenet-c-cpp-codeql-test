#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n);++i)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int A_max = 0;
  rep(i,N) A_max = max(A_max,A[i]);
  int A2= 0;
  rep(i,N){
      if(A[i]==A_max)continue;
      A2 = max(A2,A[i]);
  }
  rep(i,N){
      if(A[i]==A_max){
          cout << A2 << endl;
          continue;
      }
      cout << A_max << endl;
  }
    return 0;    
}