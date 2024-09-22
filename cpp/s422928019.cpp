#include <iostream>
#include <vector>
using namespace std;
#define A

#ifdef A

int main(void)
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (auto &a : arr)
	{
		cin >> a;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout <<arr[i] ;
		if (n != 0)
			cout << " ";
	}
	return 0;
}
#endif // A