#include <bits/stdc++.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
#define rn(i,n) for(int i=1;i<=n;i++)

int main(void){
  int n;
  cin>>n;

  vector<int> a(n);
  int max1=0,max2=0;
  r(i,n){
    cin>>a.at(i);
    if(a.at(i)>=max1){
      max2=max1;
      max1=a.at(i);
    }else if(a.at(i)>=max2){
      max2=a.at(i);
    }
    
  }

  r(i,n){
    if(a.at(i)==max1)cout<<max2<<endl;
    else cout<<max1<<endl;
  }

  return 0;
}
