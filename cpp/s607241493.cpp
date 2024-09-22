#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>

int main() {
	std::string s, ans;
	std::cin >> s;
	for (int i = 0;i < s.size();i++) {
		if (s[i] == '0') {
			ans.push_back('0');
		}
		else if (s[i] == '1') {
			ans.push_back('1');
		}
		else{ 
			if(!ans.empty())
				ans.pop_back();
		}
	}
	std::cout << ans << std::endl;
	return 0;
}