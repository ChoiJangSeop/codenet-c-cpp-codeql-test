#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	double W,H,x,y;
	double ans;
	int cnt;
	
	cin >> W >> H >> x >> y;
	
	ans=(W*H/2)-min(abs(W/2-x)*y,abs(x*abs(H-y)));
	
	printf("%lf ",ans);
	
	if(x==W/2 && y==H/2)	cout << "1" << endl;
	else	cout << "0" << endl;
	
	return 0;
}