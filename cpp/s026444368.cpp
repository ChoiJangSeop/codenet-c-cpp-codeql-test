#include <iostream>
#include <vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;


int main() {
	string s;
	string st;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'B'&&!st.empty()) {
			st.pop_back();
		}
		else if(s[i]!='B'){
			st.push_back(s[i]);
		}
	}
	cout << st;
}