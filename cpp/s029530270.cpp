#include<bits/stdc++.h>
using namespace std;
int total(int,int,int,int);
int main(){
	string s;
	cin>>s;
	int z=s.size();
	int c=0,cn=0;
	for(int i=0;i<z;i++){
		if(s[i]=='B'){
			if((s[i-1]=='0'||s[i-1]=='1')&&i!=0){
				s[i-1]='.';
				cn++;
			}
			s[i]='.';
			c++;
		}
		
	}
	c=c+cn;
	string ans;
	int x=0;
	for(int k=0;k<z;k++){
		if(s[k]=='0'||s[k]=='1'){
			ans[x]=s[k];
			x++;
		}
	}
	int l=0;
	while(l<z-c){
		cout<<ans[l];
		l++;
	}
}
int total(int a,int b,int c,int d){
	int sum=a+b+c+d;
	return sum;
}
