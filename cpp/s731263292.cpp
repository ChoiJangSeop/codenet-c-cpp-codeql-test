// Greatest_Common_Divisor.cpp
#include <iostream>
using namespace std;

//最大公約数を求める関数
int Greatest_Common_Divisor(int, int);
void Swap(int&, int&);

int main()
{
	int x, y;
	cin >> x >> y;

	cout << Greatest_Common_Divisor(x, y) << endl;

	cin.get();
	cin.get();
	return 0;
}

int Greatest_Common_Divisor(int x, int y) {
	int i;
	if(x < y) Swap(x, y);

	i = x % y;

	int tmp = i;

	while (i) {
		if (tmp % i == 0 && y % i == 0) {
			return i;
		}
		i--;
	}
}

void Swap(int &x, int &y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
