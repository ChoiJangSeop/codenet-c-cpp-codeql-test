#include<bits/stdc++.h>
using namespace std;
deque<char>s;
char c;
int main()
{
	while(scanf("%c",&c)&&c!='\n')
	{
		if(c=='B')
		{
			if(!s.empty()) s.pop_back();
		}
		else s.push_back(c);
	}
	while(!s.empty())
	{
		cout<<s.front();
		s.pop_front();
	}
	return 0;
}