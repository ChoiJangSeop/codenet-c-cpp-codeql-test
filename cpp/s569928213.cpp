#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
typedef long long LL;

int main() {
	string s;
	cin >> s;
	for(auto& c: s)
		if(c=='1') c='9';
		else if(c=='9') c='1';
	cout << s << endl;
}

