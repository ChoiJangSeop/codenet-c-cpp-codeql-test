#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,ret,maxval;
  cin>> N ;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A.at(i);
  }
  for (int i=0;i<N;i++){
    maxval=0;
    if(maxval<A.at(i)){
    for (int j=0;j<N;j++){
      if(i!=j){
        if(A.at(j)>maxval)maxval=A.at(j);
      }
    }
  }
    cout<<maxval<<endl;
  }


}
