#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string ans;
	for(auto c : s){
		switch(c){
			case 'B':
				if(!ans.empty()) ans.erase(--ans.end());
				break;
			default:
				ans += c;
				break;
		}
	}
	cout << ans << endl;
	return 0;
}