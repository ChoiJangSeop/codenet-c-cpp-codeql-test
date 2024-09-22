#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int temp=n;
  int mod;
  int sum=0,mul=1;
  while(temp)
  {
    mod=temp%10;
    if(mod==9)
      sum+=1*mul;
    else
      sum+=9*mul;
    temp/=10;
    mul*=10;
  }
  cout<<sum;
  return 0;
}