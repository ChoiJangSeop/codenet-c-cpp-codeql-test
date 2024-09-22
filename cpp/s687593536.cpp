#include<iostream>
using ll = long long;
using namespace std;
ll gcd(ll x,ll y){
	if(x<y)	swap(x,y);
	if(y==0)	return x;
	return gcd(y,x%y);
}
int main(){
	ll a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}
