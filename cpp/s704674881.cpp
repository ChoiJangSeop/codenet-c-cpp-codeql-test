#include<iostream>
using namespace std;

int main(){
  int a,b,j,k,ans;
  cin>>a>>b;
  if(a >b) j=b,k=a;
  else j=a,k=b;
  for(int i=1;i<=j;i++) if(k%i==0 && j%i==0) ans=i;
  cout<<ans<<endl;

  return 0;
}