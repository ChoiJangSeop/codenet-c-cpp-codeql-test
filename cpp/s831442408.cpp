#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(A) A.begin(), A.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	int n = s.length();
	stack<char> S;
	
	rep (i, n){
		if (s[i] != 'B') S.push(s[i]);
		else
		if (!S.empty()) S.pop();
	} // end rep

	string res = "";
	while(!S.empty()){
		res += S.top(); S.pop();
	} // end while
	reverse(ALL(res));

	cout << res << endl;

	return 0;
}