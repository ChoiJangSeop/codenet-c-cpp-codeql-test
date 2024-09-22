#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	long long n,ans=0,flag=0;
	cin>>n;
	long long a[n+1],f[200001]={0},ii=0,c[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(f[a[i]]==0){
			f[a[i]]=1;
			ii++;
			c[ii]=a[i];
		}
	}
	sort(c+1,c+ii+1,cmp);
	for(int i=1;i<=n;i++){
		if(a[i]==c[1]&&ii==1){
			cout<<a[1]<<endl;
		}
		else if(a[i]==c[1]){
			cout<<c[2]<<endl;
		}
		else{
			cout<<c[1]<<endl;
		}
	}
	return 0;
}