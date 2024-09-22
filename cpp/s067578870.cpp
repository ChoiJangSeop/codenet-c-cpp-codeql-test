#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include<iomanip>

int main() {

	int N;
	std::cin >> N;

	std::vector<int> A(N);
	for (auto& a : A) {
		std::cin >> a;
	}

	int max;
	int better;

	auto tmp = A;
	std::sort(tmp.begin(), tmp.end());

	max = tmp.back();
	tmp.pop_back();
	better = tmp.back();

	//std::cout << max << better;

	
	for (auto& a : A) {
		if (a != max) {
			std::cout << max << std::endl;
		}
		else {
			std::cout << better << std::endl;
		}
	}
	
	return 0;
}