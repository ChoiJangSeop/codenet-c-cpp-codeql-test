#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define x first
#define y second
using namespace std;
int main()
{
	string s;
	cin>>s;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='1') cout<<9;
		else if (s[i]=='9') cout<<1;
	}
    return 0;
}