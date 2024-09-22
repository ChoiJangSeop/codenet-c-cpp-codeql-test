#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <utility>
using namespace std;

int main() {
  int N;
  cin>>N;
  
  vector<int> a(N);
  for(int i=0;i<N;++i){
    cin>>a[i];
  }
  
  int amax=0;
  int imax=0;
  for(int i=0;i<N;++i){
    if(a[i]>amax){
      amax=a[i];
      imax=i;
    }
  }
  
  for(int i=0;i<N;++i){
    if(i!=imax)
      cout<<amax<<endl;
    else{
      sort(a.begin(),a.end(),greater<int>());
      cout<<a[1]<<endl;
    }
  }
  
}