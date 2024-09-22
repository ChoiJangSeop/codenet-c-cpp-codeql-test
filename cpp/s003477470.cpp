#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> MY(N);
  int MAX=0;
  int now=0;
  for(int i=0;i<N;i++){
    cin >> MY.at(i);
  }
  for(int i=0;i<N;i++){
    if(MAX<MY.at(i)){
      MAX=MY.at(i);
      now=i;
    }
  }
  sort(MY.begin(), MY.end());
  for(int i=0;i<N;i++){
    if(i==now){
      cout << MY.at(N-2) << endl;
    }
    else cout << MY.at(N-1) << endl;
  }
}


