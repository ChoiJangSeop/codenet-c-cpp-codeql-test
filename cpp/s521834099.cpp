#include <iostream>

using namespace std;

int main()
{
	int n;
	int array[100];

	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}

	for(int i=n; i>1; i--)
	{
		cout << array[i-1] << " ";
	}
	
	cout << array[0] << endl;

	return 0;
}