// This  Program is made by Jan(Codezebra)
#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	for(char e:s){
		if(e=='1'){
			cout<<9;
		}
		else if(e=='9'){
			cout<<1;
		}
		else{
			cout<<e;
		}
	}	
	return 0;
}

