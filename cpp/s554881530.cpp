#include<iostream>
#include<sstream>
#include<vector>
#include<iterator>
using namespace std;

int main(void)
{
	string n;
	cin >> n;

	for(char c : n){
		if(c == '1')
			cout << 9;
		else if(c == '9')
			cout << 1;
	}
	cout << endl;

	return 0;
}
