#include<iostream>
#include<algorithm>
using namespace std;

int GCD(int x, int y)
{
	int i;
	int end = min(x, y);
	for (i = end; i > 0;  i--)
	{
		if ((x % i == 0) && (y % i == 0))
		{
			break;
		}
	}
	return i;
}

int main()
{
	int x, y;
	cin >> x;
	cin >> y;

	cout << GCD(x, y) << endl;

    return 0;
}