#include<iostream>
using namespace std;

int func(int x,int y)
{
	int z;
	
	if(x == 1 || y == 1)
		return 1;
	
	if(x<y){
		z = x;
		x = y;
		y = z;
	}
	
	if(y % (x%y) == 0)
		return x%y;
		
	return func(y, x % y);
}

int main()
{
	int x,y;
	cin >> x >> y;

	cout << func(x,y)<< endl;

	return 0;
}