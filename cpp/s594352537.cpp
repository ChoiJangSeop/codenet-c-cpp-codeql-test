#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;
ll n,t[400010],mx = 0;
void built(){
	for(int i = n-1;i>0;i--){
		t[i] = max(t[i<<1],t[i<<1|1]);
	}
}

ll query(int l, int r){
	ll mn = mx;
	for(l += n, r += n; l<r; l >>= 1,r >>= 1){
		if(l&1) mn = max(mn,t[l++]);
		if(r&1) mn = max(mn,t[--r]);
	}
	return mn;
}

int main(){
	int i;
	cin >> n;
	for(i=0;i<n;i++){
		int x; cin >> x; t[i + n] = x;
	}
	built();
	for(i=0;i<n;i++){
		cout << max(query(0,i),query(i + 1,n)) << endl;
	}
}