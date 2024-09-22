#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
	double n,m,x,y;
	cin >> m >> n >> x >> y;
	int t1 = x*n,t2 = n*(m-x),t3=y*m,t4=(n-y)*m;
	if(t1 > t2) t1 = t2;
	if(t3 > t4) t3 = t4;
	if(n / x == m / y) {
		cout << n*m/2 << ".000000 1"; 
	} 
	cout << t1 << ".000000 ";
	if(t1 == t3) cout << "1";
	else cout << 0;
} 