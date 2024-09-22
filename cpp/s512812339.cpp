#include<bits/stdc++.h>
using namespace std;
signed main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  int a;
  int b[1000000],c[1000000];
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>b[i];
  }
  for(int i=0;i<a;i++){
    for(int k=0;k<a;k++){
      if(i!=k){
	c[k]=b[k];
      }
      for(int j=0;j<a;j++){
	sort(c,c+a,greater<int>());
      }
    }
    cout<<c[0]<<"\n";
  }
  return(0);
}
