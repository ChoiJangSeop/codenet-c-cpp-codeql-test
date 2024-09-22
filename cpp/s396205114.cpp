#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,ans="";
	cin>>s1;
	for (int i=0;i<=s1.size()-1;i++)
	{
		if (s1[i]=='0')  ans=ans+'0';
		if (s1[i]=='1')  ans=ans+'1';
		if (s1[i]=='B')
		{
			if (ans.size()==0)  continue;
			if (ans.size()==1)
			{
				ans="";
				continue;
			}
			ans=ans.substr(0,ans.size()-1);
		}
	}
	cout<<ans<<endl;
	return 0;
}