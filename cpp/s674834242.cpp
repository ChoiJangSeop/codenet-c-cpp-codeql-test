#include<bits/stdc++.h>
using namespace std;
vector<int>ss; 
int main()
{
	string s,ans;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
		ss.emplace_back(1); 
		else if(s[i]=='0')
		ss.emplace_back(0); 
		else
		{
			if(ss.empty()) ;
			else 
			{
				 ss.pop_back();
			}
		}
	}
	for(int i=0;i<ss.size();i++)
		cout<<ss[i];
	return 0; 
	} 
 