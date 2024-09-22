#include <bits/stdc++.h>
using namespace std;
int main()
{
 	string s;
	int i;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
		if(s[i]==49) s[i]+=8;
		if(s[i]==57) s[i]-=8;
 	} 
 	cout<<s;
	return 0;
}
