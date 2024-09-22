#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n,max=0,next=0;
  bool dmax=false;
  vector<int> a;
  cin>>n;
  a.resize(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[max]<a[i]){
      dmax=false;
      max=i;
    }
    if(a[max]==a[i]&&max!=i)dmax=true;
  }
  for(int i=0;i<n;i++){
    if(a[next]<a[i]&&a[i]<a[max]){
      next=i;
    }
  }
  for(int i=0;i<n;i++){
    if(dmax==true)cout<<a[max]<<endl;
    else if(max==i)cout<<a[next]<<endl;
    else cout<<a[max]<<endl;
  }
  return 0;
}