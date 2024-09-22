#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>
using namespace std;
double n,m,x,y;
int main()
{
	cin>>n>>m>>x>>y;
	cout<<n*m/2<<' ';
	if(2*x==n && 2*y==m)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	return 0;
}