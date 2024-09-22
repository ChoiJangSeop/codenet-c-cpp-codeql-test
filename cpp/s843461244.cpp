#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	vector<char> buf;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '0') buf.push_back('0');
		else if(s[i] == '1') buf.push_back('1');
		else if(buf.size()) buf.pop_back();
	}
	for(int i = 0; i < buf.size(); ++i) cout << buf[i];
	cout << endl;
}