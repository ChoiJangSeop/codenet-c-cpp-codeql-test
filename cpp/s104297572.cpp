#include <iostream>
using namespace std ;

int main()
{
	int i,j ;
	while( cin >> i >> j )
	{
		int i = i + j ;
		int count ;

		while( i > 0 )
		{
			i /= 10 ;
			count ++ ;
		}

		cout << count << endl ;
	}

	return 0 ;
}