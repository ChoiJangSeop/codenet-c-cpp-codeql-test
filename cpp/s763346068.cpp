#include<bits/stdc++.h>
#define debug(x) cerr<<"\tDEBUG: "<<#x<<" = "<<(x)<<endl
#define debug2(a,b) cerr<<#a<<"\t"<<#b<<" = "<<(b)<<endl
using namespace std;
const int maxn=2e5+100;
bool cur1;
int n,A[maxn];
int Max1[maxn],Max2[maxn];
bool cur2;
int main(){
//	double sz=&cur1-&cur2;
//	cout<<sz/1024/1024<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d",&A[i]);
	for(int i=1;i<=n;i++){
		Max1[i]=max(Max1[i-1],A[i]);
	}
	for(int i=n;i>=1;i--){
		Max2[i]=max(Max2[i+1],A[i]);
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",max(Max1[i-1],Max2[i+1]));
	}
	return 0;
}