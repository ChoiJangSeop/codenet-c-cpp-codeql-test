#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, ans; cin >> s;
	int N = s.size();
	for( int i = 0 ; i < N ; i++ ){
		if(s[i] == '0')ans.push_back('0');
		if(s[i] == '1')ans.push_back('1');
		if(s[i] == 'B' && !(ans.empty()))ans.pop_back();
	}
	cout << ans << endl;
}