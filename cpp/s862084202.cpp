#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x; cin>>n; 
	vector<int>b;
	vector<int>a;
	for(int i=0;i<n;i++) {
		cin>>x; a.push_back(x); b.push_back(x);
	}
	sort(b.begin(),b.end());
	for(int i=0;i<n;i++) {
		if(a[i]==b[n-1]) cout<<b[n-2]<<endl;
		else cout<<b[n-1]<<endl;
	}
	return 0;
}