#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0),ios::sync_with_stdio(false);
	int a,b;
	while(cin>>a>>b){
		int sum=a+b;
		int cnt=0;
		while(sum){
			++cnt;
			sum/=10;
		}
		cout<<cnt<<"\n"s;
	}
}
