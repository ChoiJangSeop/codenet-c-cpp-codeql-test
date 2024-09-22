#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define INF 1LL<<62
#define inf 1000000007 

int main() {
	long double h,w,x,y;
	cin>>h>>w>>x>>y;
	printf("%.10Lf ",h*w/2.0);
	if(x*2==h&&y*2==w){
		cout << 1<<endl;
	}
	else{
		cout << 0;
	}
	// your code goes here
	return 0;
}