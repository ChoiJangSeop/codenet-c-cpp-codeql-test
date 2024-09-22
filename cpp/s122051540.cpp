#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define REP(i, k, n) for(int i=k; i<=n; ++i)
#define REPR(i, k, n) for(int i=k; i>=n; --i)
#define MAX 2001
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define r return
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int long long uill;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	

	string input;
	string f = "";

	getline(cin, input);

	rep(i, input.length()){
		if(input[i] == '0'){
			f.push_back('0');
		}else if(input[i] == '1'){
			f.push_back('1');
		}else if(input[i] == 'B' && f[0] != '\0'){
            f.pop_back();
		}else if(input[i] == 'B'){
			continue;
		}
	}

	cout << f << "\n";


     r 0;
}