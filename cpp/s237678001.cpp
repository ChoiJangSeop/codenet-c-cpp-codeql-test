#include <bits/stdc++.h>
using namespace std;

const int N = 200000 + 7;
int n;
int t[2*N];

void build(){
	for(int i = n-1;i > 0;--i) t[i] = max(t[i<<1],t[i<<1|1]);
}

int query(int l,int r){
	int res = -INT_MAX;

	for(l += n, r += n; l < r; l >>= 1, r >>= 1){
		if(l&1) res = max(res, t[l++]);
		if(r&1) res = max(res, t[--r]);
	}

	return res;

}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++) scanf("%d", t + n + i);
	build();

	for(int i = 0;i < n;i++){
		int res = -INT_MAX;
		if(i > 0) res = max(res, query(0,i));
		if(i < n-1) res = max(res, query(i+1,n)); 
		

		printf("%d\n", res);
	}

}
