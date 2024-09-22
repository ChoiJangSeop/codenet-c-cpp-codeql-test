
#include <iostream>
#include <vector>
#include <algorithm>

struct greater
{
	template<class T>
	bool operator()(T const& a, T const& b) const { return a > b; }
};

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> data;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		std::cin >> a;
		data.push_back(a);
	}

	//ソート用に配列コピー
	std::vector<int> sorted(data.size());

	std::copy(data.begin(), data.end(), sorted.begin());

	//降順にソート
	std::sort(sorted.begin(), sorted.end(), greater());

	for (int i = 0; i < n; i++)
	{
		if (data.at(i) == sorted.at(0))
			std::cout << sorted.at(1);
		else
			std::cout << sorted.at(0);
	}

	return 0;
}
