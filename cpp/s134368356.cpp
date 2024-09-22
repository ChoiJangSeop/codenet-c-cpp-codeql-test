#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,i,k,max=-1,c=0;
  cin>>n;
  long long a[n];
  for(i=0;i<n;i++)
      {
        cin>>a[i];
      }
  k=*max_element(a,a+n);   
  for(i=0;i<n;i++)
  {
  	if(a[i]==k)
  	c++;
   } 
  //cout<<k;
  for(i=0;i<n;i++)
  {
    if(a[i]<k)
    {
      if(max<a[i])
      {
        max=a[i];
      }
    }
  }
if(c>1)
{
	max=k;
}
  for(i=0;i<n;i++)
  {
    if(a[i]==k)
      cout<<max<<endl;
    else
      cout<<k<<endl;
  }
  return 0;
}