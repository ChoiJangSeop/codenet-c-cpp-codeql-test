//shivamkr21
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;
int main()
{
    lli n;
  	cin>>n;
  	lli p,ma=-999999,sma=-999999,k=0;
    vector<lli> ar;
  	for(lli i=0;i<n;i++)
    {
      	cin>>p;
        ar.push_back(p);
      	if(p>ma)
        {
          	ma=p;
            k=i;
        }
      	
    }
    for(lli i=0;i<n;i++)
    {
        if(ar[i]>sma && sma<ma)
        {
            sma=ar[i];
        }
    }
    if(sma<0)
    {
        sma=ma;
    }
  	for(lli i=0;i<n;i++)
    {
      	if(ar[i]==ma)
        {
          	cout<<sma<<endl;
        }
      	else
        {
          	cout<<ma<<endl;
        }
    }
	return 0;
}
