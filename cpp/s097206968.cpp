#include <bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define F first
#define S second
#define pi 3.14159265359
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;


int main()
{


 ll X,Y,x,y;
 cin>>X>>Y>>x>>y;
 float area1=(x*Y)/1.0;
 float area2=((X-x)*Y)/1.0;
 float area3=(y*X)/1.0;
 float area4=((Y-y)*Y)/1.0;
 float minn1=min(area1,area2);
 float minn2=min(area3,area4);
 float maxx=max(minn1,minn2);
  cout<<fixed<<setprecision(9)<<maxx<<" ";
 if(X%2==0 && Y%2==0 && X/2==x && Y/2==y)
   cout<<"1"<<endl;
 else
   cout<<"0"<<endl;

 return 0;
}
