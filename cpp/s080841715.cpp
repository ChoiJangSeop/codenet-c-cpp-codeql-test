#include<bits/stdc++.h>
#include <math.h>
#include <cmath>
#include <limits>
#include <iostream>
#include <assert.h>

#define rep(i,n) for(int i=0;i<n;++i)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
#define yesno(flg) if(flg){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define MAX_N 1002
#define i197 1000000007

using namespace std;

typedef long long ll;
typedef pair<ll,ll> P1;
typedef pair<int,int> Pi;
typedef pair<double,Pi> Pdi;
typedef pair<ll,int>Pli;
typedef pair<P1,ll> P2;
const ll INF=10000000000000000001;
struct edge{int to,cost;};
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
struct Road{double cost;int a,b;};
struct pos{
	int x,y,cost;
};
int main(){

	string s;
	int s2[11]={};
	cin>>s;

	int t=0;
	rep(i,s.size()){
		if(s[i]=='0')s2[t]=0;
		if(s[i]=='1')s2[t]=1;
		if(s[i]=='B'&&t>0)t--;
		if(s[i]=='0'||s[i]=='1')t++;
	}
	rep(i,t){
		cout<<s2[i];
	}
	cout<<endl;
	return 0;

}

