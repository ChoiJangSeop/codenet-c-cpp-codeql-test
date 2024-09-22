#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define ff first
#define ss second
#define se set<ll>
#define vec vector<ll>
#define inf 10000000000000000
bool mark[100005];
vec adj[100005];
ll counter;
vec cnt;
vector<string> forsubs;
ll b;
ll a;

ll n;


int main()
{    
 

	#ifdef APNA_IO
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 


ll w,h,x,y;
cin>>w>>h>>x>>y;

ll area1=min(x*h,(w-x)*h);
ll area2=min(y*w,(h-y)*w);

float ans=max(area1,area2);

if(area1==area2)
cout<<fixed<<setprecision(6)<<ans<<" "<<"1"<<endl;

else
cout<<fixed<<setprecision(6)<<ans<<" "<<"0"<<endl;
}