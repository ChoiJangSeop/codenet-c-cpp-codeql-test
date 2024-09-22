#include<bits/stdc++.h>
using namespace std;

string s;
int i;

int main(){
	ios_base::sync_with_stdio(false);

	cin>>s;
	for(i=0;i<s.length();i++){
		if(s[i]=='1')s[i]='9';
		else if(s[i]=='9')s[i]='1';
	}
	cout<<s<<"\n";
}