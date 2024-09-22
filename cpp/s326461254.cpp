#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,x,mx=0,nx=0;
cin>>n;
vector<long long> v(n);
vector<long long> v2(n);
for(long long i=0;i<n;i++)
{

cin>>v[i];
if(v[i]==mx){nx++;}
mx=max(mx,v[i]);
}
v2=v;
sort(v.begin(),v.end());

for(long long i=0;i<n;i++)
{
    if(v2[i]!=mx){cout<<mx<<endl;}
    else
    {
        if(nx>0){cout<<mx<<endl;}
        else
        {
            cout<<v[n-2]<<endl;
        }

    }
}
	return 0;
}
