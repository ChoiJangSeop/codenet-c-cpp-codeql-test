#include<iostream>
#include<iomanip>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<functional>
#include<algorithm>
#include<bitset>
#include<utility>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;
double n,m,x,y;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m>>x>>y;
	printf("%f ",(double)n*m/2ull); 
	if(n==m&&(long long)n%2ull==0ull&&(long long)m%2ull==0ull||x==n/2ull&&y==m/2ull)
		puts("1");
	else
		puts("0");
	return 0;
}