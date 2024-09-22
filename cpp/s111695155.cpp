#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#define MOD 1000000007
using namespace std;

int main()
{
	string s;
	string ans;
	cin >> s;
	int i;
	for (i = 0; i < (int)s.length(); i++){
		if (s[i] == '0'){
			ans += '0';
		}
		else if (s[i] == '1'){
			ans += '1';
		}
		else{
			if(!ans.empty())
				ans.pop_back();
		}
	}
	cout << ans << endl;


	return 0;
}