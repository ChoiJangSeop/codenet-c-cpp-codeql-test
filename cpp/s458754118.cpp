#include <bits/stdc++.h>
using namespace std;

#define max(a,b)(a>b?a:b)

int main()
{
	ios::sync_with_stdio(false);
	
	const int max_n=20;
	char operations[max_n];
	cin>>operations;
	
	char answer[max_n];
	int end=0;
	
	for(int i=0;operations[i]!='\0';i++)
	{
		if(operations[i]=='B')
			end=max(0,end-1);
		else
			answer[end++]=operations[i];
	}
	
	for(int i=0;i<end;i++)
		cout<<answer[i];
	
	return 0;
}