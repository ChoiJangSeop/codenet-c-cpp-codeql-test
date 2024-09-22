#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int A[n];
  for(i=0;i<n;i++)
  {
    cin>>A[i];
  }
  int max1,max2,B[n];
  for(int i=0;i<n;i++)
  {
    B[i]=A[i];
  }
  sort(B,B+n);
  max1=B[n-1];
  max2=B[n-2];
  for(i=0;i<n;i++)
  {
    if(A[i]==max1)
    cout<<max2<<'\n';
    else 
    cout<<max1<<'\n';
  }
  return 0;
}