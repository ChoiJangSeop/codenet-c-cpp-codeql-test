#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;



int main()
{	
	int a,b;
	string s;
	stringstream ss;
	while(cin>>a>>b)
	{
		ss<<a+b;
		ss>>s;
		ss.clear();
		cout<<s.length()<<endl;
	}
	return 0;	
}
