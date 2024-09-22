#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<char> v;
	string s;

	cin >> s;

	for (int i = 0; i < (int)s.size(); i++)
	{
		if (s[i] == '0') {
			v.push_back('0');
		}
		else if (s[i] == '1') {
			v.push_back('1');
		}
		else {
			if (v.size() == 0)continue;
			v.pop_back();
		}
	}

	for (vector<char>::iterator it = v.begin();it != v.end();it++) {
		cout << *it;
	}
	cout << endl;

	return 0;
}