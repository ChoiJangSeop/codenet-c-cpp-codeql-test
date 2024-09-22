#include <iostream>
using namespace std;

int main()
{
	int X, Y;
	int max = -100;


	cin >> X;
	cin >> Y;

	for (int i = 1; i <= X && i <= Y;i++) {
		if (X % i == 0 && Y % i == 0) max = i;
	}

	cout << max << endl;

    return 0;
}