#include<bits/stdc++.h>
using namespace std;
const int maxn=200010;
int n,a[maxn];
vector<int> v;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	int tmp=v[v.size()-1];
	for(int i=0;i<n;i++)
	{
		if(a[i]!=tmp)
			cout<<tmp<<endl;
		else
			cout<<v[v.size()-2]<<endl;
	}
	return 0;
}