#include<bits/stdc++.h>
using namespace std;


int main(){
  int N, t;
  int max_val=0, max_idx=0, second_max_val=0;
  cin >> N;

  for(int i=0;i<N;i++){
    cin >> t;
    if(t>max_val){
      second_max_val = max_val;
      max_val = t;
      max_idx = i;
    }
  }
  if(max_idx != N && second_max_val < t)  second_max_val = t;

  for(int i=0;i<N;i++){
    if(i==max_idx)  cout << second_max_val << endl;
    else cout << max_val << endl;
  }

}
