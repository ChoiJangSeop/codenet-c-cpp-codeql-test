#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	int mx=0,mx2,num;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a>=mx){
			mx2=mx;
			mx=a;
			num=i;
		}
		else if(a>mx2) mx2=a;
	}
	for(int i=1;i<=n;i++){
		if(num==i) printf("%d\n",mx2);
		else printf("%d\n",mx);
	}
	return 0;
}