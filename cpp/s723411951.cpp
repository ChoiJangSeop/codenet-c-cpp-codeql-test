#include <iostream>
using namespace std;

int main(){
	int a, b, c ,d;
	while ( cin >> a >> b ) {
		c=a+b;
		d = 0;
		while( c > 0 , d++ , c /= 10 );
		cout << d << endl;
	}
}