#include<iostream>
#include <string>
#include<vector>
typedef long long ll;

using namespace std;
int main()
{
	string n;
	cin >> n;

	string kotae = "999";

	for (int i = 0; i < 3; i++) {
		if (n[i] == '9') kotae[i] = '1';
	}
	cout << kotae << endl;
	return 0;
}