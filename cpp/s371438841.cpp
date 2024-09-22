#include <functional>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <deque>
#include <list>
#include <map>
#include <set>
using namespace std;

/*** typedef ***/
typedef long long LL;
typedef unsigned int ui;
typedef unsigned long long ULL;
typedef pair < int , int > ii;
typedef pair < LL  , LL  > ll;
typedef vector <int>  vint;
typedef vector <bool> vbool;
typedef vector <long> vlong;

/*** define ***/
#define sz(x)			((int)x.size())
#define tin(x)			scanf("%d",&x)
#define all(x)			x.begin(),x.end()
#define Set(b,a)		memset(b,a,sizeof b)
#define print1(x)		printf("Case %d:",x++)
#define tin2(x,y)		scanf("%d%d",&x,&y)
#define tin3(x,y,z)		scanf("%d%d%d",&x,&y,&z)
#define loop(i,i0,in)	for(int i=i0 ; i<in ; i++)
#define rep(i,n)		for(int i=0 ; i<(n) ; i++)
#define _rep(i,n)		for(int i=n-1 ; i>=0 ; i--)
#define _loop(i,in,i0)	for(int i=in-1 ; i>=i0 ; i--)
#define Fore(it, x)		for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)

const int       maxn = 100+5;
const long double PI = 3.1415926535897932384626433832795;

LL gcd(LL a,LL b)
{
	return b==0 ? a : gcd(b,a%b);
}

int main()  
{  
#ifdef Online_Judge
	freopen("a.in","r",stdin);
#endif
	LL a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}