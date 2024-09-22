#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nA = 0, nB = 0;
	while (cin >> nA >> nB)
	{
		string strOut;
		int nSum = nA + nB;
		strOut = to_string(nSum);
		cout << strOut.size() << endl;
	}
	return 0;
}
