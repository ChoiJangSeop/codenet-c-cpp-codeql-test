#include<bits/stdc++.h>

#define ms(a,x) memset(a,x,sizeof(a))
using namespace std;

typedef long long ll;

int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);}
int lcm(int a,int b){
	return a/gcd(a,b)*b;}

int main(){
	int n,m;
	cin>>n>>m;
	cout<<gcd(n,m)<<endl;
	return 0;
}


