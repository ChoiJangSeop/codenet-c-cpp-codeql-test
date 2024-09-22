#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vi vector<int>
#define prec fixed<<setprecision(10)
#define mod 1000000007
#define set(x) __builtin_popcount(x)
#define ffs(x) __builtin_ffs(x)

int main(){
	int w,h,x,y;
	cin >> w >> h >> x >> y;
	cout << prec << w*h/2;
	if(w==2*x && h==2*y)cout << ' ' << 1;
	else cout << ' ' <<0;
	
}
