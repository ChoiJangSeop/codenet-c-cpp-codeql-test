#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long x,y;
	long maxi = 1;
	
	cin >> x >> y;
	
	if(x < y) swap(x,y);
	
	if(y < 0)
	{
		for(int d = 1; d <= (x % y); d++)
		{
			if(y % d == 0 && (x % y) % d == 0) maxi = d;
		}
	}
		
		cout << maxi << endl;
		
	return 0;
}