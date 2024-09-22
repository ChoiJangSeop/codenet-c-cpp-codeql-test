#include <bits/stdc++.h>
//#pragma GCC optimize "-O3"
typedef unsigned long long ull;
typedef unsigned int ui;
typedef unsigned short us;
typedef long long ll;
typedef long double ld;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const ll infll=(1ull<<63)-1,mod=1e9+7;
const int inf=(1ull<<31)-1;
int n,a[200000],m1=0,t=1,m2=0;

int main()
{
	//freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false); cin.tie(0);cout.precision(18);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (m1<a[i])
			m1=a[i],t=1;
		else if (m1==a[i])
			t++;
	}
	if (t==1){
		for (int i=0;i<n;i++)
			if (a[i]!=m1)
				m2=max(m2,a[i]);
	}
	for (int i=0;i<n;i++){
		if (a[i]!=m1)
			cout<<m1<<"\n";
		else {
			if (t==1)
				cout<<m2<<"\n";
			else 
				cout<<m1<<"\n";
		}
	}
	return 0;
}
