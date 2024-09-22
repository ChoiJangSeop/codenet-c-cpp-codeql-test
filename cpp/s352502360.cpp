#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
  int n,i,a[200010],lmax[200010]={},rmax[200010]={};
  cin >> n;
  for (i=1;i<=n;i++) cin >> a[i];
  for (i=0;i<=n+1;i++) lmax[i]=max(lmax[i-1],a[i]);
  for (i=n;i>=0;i--) rmax[i]=max(rmax[i+1],a[i]);
  for (i=1;i<=n;i++) cout << max(lmax[i-1],rmax[i+1]) << endl;
  return 0;
}