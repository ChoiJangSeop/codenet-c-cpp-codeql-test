#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	std::string str = std::to_string(n);

	for(char &c : str) {
		if(c == '1') {
			c = '9';
		} else if(c == '9') {
			c = '1';
		}
	}

	// 必要？
	int answer = std::stoi(str);

	std::cout << answer << std::endl;

	return 0;
}