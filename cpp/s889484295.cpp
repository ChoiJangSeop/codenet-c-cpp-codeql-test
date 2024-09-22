#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

typedef long long ll;
const ll INF = 1000000000ll;
const ll MOD = 1000000007ll;
const double EPS = 1e-8;

int main(void) {
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	
	string s;
	cin >> s;

	stack<char> ans;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'B'){
			if(!ans.empty()){
				ans.pop();
			}
		}else{
			ans.push(s[i]);
		}
	}

	while(!ans.empty()){
		cout << ans.top();
		ans.pop();
	}
	puts("");

	return 0;
}
