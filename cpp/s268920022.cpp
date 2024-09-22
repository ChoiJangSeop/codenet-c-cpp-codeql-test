#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  map<int,int> v;
  int a;
  for(int i=0;i<n;i++)
  {cin>>a;
   v[a]=i;
  }
  map<int ,int >::iterator it;
  it=v.end();
  it--;
  a=it->first;
  int a1=it->second;
  it--;
  int b=it->first;
  for(int i=0;i<n;i++)
    {
    	if(i==a1)
    		cout<<b<<endl;
		else cout<<a<<endl;
	}
}
   
    
  