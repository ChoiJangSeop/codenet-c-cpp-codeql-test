
#include<iostream>
#include<algorithm>
#include<string>
int main() {
	std::string str;
	std::cin >> str;
	
	auto it = std::begin(str);
	while (it != std::end(str)) {
		it = std::find(it, std::end(str), 'B');

		if (it != std::end(str) && it != std::begin(str)) {
			*(it - 1) = 'B';
			++it;
		}

	}
	
	for (const auto&v : str) {
		if (v != 'B') { std::cout << v; }
	}
	std::cout << "\n";
	return 0;
}
