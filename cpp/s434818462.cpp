#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int>  A(N);
  vector<int> ans(N);
  for( int i = 0; i < N; i++ ){
    cin >> A.at(i);
    ans.at(i) = A.at(i);
  }
  
  sort(ans.begin(), ans.end());
  
  for( int i = 0; i < N; i++ ){
    if( A.at(i) == ans.at(N-1) ){
      cout << ans.at(N-2) << endl;
    }else{
      cout << ans.at(N-1) << endl;
    }
  }
}
