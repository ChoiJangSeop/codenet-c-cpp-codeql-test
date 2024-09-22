#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	int a[n];
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
		v.push_back({a[i],i});
	}
	sort(v.begin(),v.end());
	int ans[n];
	ans[v[v.size()-1].second]=v[v.size()-2].first;
	for(int i=v.size()-2;i>=0;i--)
	{
		ans[v[i].second]=v[v.size()-1].first;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}