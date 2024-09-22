#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("-ffloat-store")  
#pragma GCC optimize ("-fno-defer-pop")
#define all(a) a.begin(),a.end()
#define ll long long int
#define ld long double
ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m)%m; t=(t*t)%m; if(b&1) t=((t%m)*(a%m))%m; return t;}
ll modInverse(ll a, ll m) { return power(a, m-2, m); }
#define ps push_back
#define fs first
#define sc second
#define N 3000005
#define endl "\n"
#define mod 1000000007
int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	ld w,h,x,y;
	cin>>w>>h>>x>>y;
	cout<<fixed<<setprecision(10);
	if((x==0.0&&y==0.0)||(x==0.0&&y==h)||(x==w&&y==0.0)||(x==w&&y==h)||(floor(w/2.0)==ceil(w/2.0)&&floor(h/2.0)==ceil(h/2.0))){
		ld k=(w*h)/(ld)2.0;
		cout<<k<<" 0";
		return 0;
	}

	if(((w/((ld)2.0))==x)&&((h/(ld)2.0)==y)){
		ld k,l,f;
		k=x*(h); l=y*(w);
		if(k==l){
			cout<<k<<" 1";
		}
		else {
			cout<<max(k,l)<<" 0";
		}
	}
	else if(w/(ld)2.0==x){
		ld k;
		k=x*(h);
		cout<<k<<" 0";
	}
	else {
		ld l;
		l=y*(w);
		cout<<l<<" 0";
	}
	return 0;
}
