#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
long long int mod=1e9+7;
bool debug=false;
typedef long long ll;
int f(int a,int b){
	if(a<b)return b;
	else return a;
}
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	vector<int>c(n);
	rep(i,n)cin>>a[i];
	int max=0,max2=0;
	rep(i,n){
		if(max<a[i]){
			b[i]=a[i];
			max = a[i];
		}else{
			b[i]=max;
		}
		if(max2<a[n-1-i]){
			max2=a[n-1-i];
		}
		c[n-1-i]=max2;
	}
	cout<<c[1]<<endl;
	for(int i=1;i<n-1;i++){
		cout<<f(b[i-1],c[i+1])<<endl;
	}
	cout<<b[n-2]<<endl;





	return 0;
}