#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define ft first
#define sd second


typedef long long ll;
typedef long double ld;

void INeedIt() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}             
int main () {
	INeedIt();
	string s, a="";
	cin>>s;
	for (int i=0;i<s.size();i++) {
		if (s[i]!='B') a+=s[i];
		if (s[i]=='B' && a.size()!=0) a.erase(a.begin()+a.size()-1);
	}
	cout<<a;
	return 0;
}
 