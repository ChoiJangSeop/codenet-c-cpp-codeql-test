// user:halahen
#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int i,j,k;
int n;
int read(){
	int tot=0,fh=1;
	char c=getchar();
	while ((c<'0')||(c>'9')){ if(c=='-') fh=-1; c=getchar(); }
	while ((c>='0')&&(c<='9')){ 
		if (c=='1') c='9'; else{
			if (c=='9') c='1';
		}
		tot=tot*10+c-'0'; c=getchar(); 
	}
	return tot*fh;
}
int main(){
	n=read();
	printf("%d\n",n);
	return 0;
}
