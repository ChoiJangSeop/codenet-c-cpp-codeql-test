#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>
#define INF LLONG_MAX
#define PI acos(-1)
const ll MOD = 1e9 + 7;
#define x first
#define y second
#define all(x) x.begin(),x.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(c,a,b) for(ll c=a;c<b;c++)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min_heap priority_queue<pll,vector<pll>,greater<pll> >
ll dx4[]={-1,1,0,0};
ll dy4[]={0,0,-1,1};
ll dx8[]={-1,-1,-1,0,1,1,1,0};
ll dy8[]={-1,0,1,1,1,0,-1,-1};
bool isvalid(ll x,ll y,ll n,ll m)
{
	return (x>=0 and y>=0 and x<n and y<m);
}
ll isprime[1000];
vector<ll> prime;
void sievetoprime(ll n)
{
	mem(isprime,true);
	for(ll p=2;p*p<=n;p++)
	{
		if(isprime[p]==true)
		{
			for(ll i=p*p;i<=n;i+=p)
				isprime[i]=false;
		}
	}
}
ll lcm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
bool cmp(pair<string,ll> a,pair<string,ll> b)
{
	if(a.first<b.first)
		return 1;
	else if(a.x==b.x)
	{
		return a.y<b.y;
	}
	return 0;
}
bool cmp(ll a,ll b)
{
	return a>b;
}
void solve()
{
	ll w,h,x,y;
	cin>>w>>h>>x>>y;
	double a=w*h;
	cout<<fixed<<setprecision(9)<<a/2;
	if(2*x==w and 2*y==h)
	{
		cout<<" "<<"1";
	}
	else
	{
		cout<<" "<<"0";
	}
}	
int main()
{
	
	IOS
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		solve();
	}
}