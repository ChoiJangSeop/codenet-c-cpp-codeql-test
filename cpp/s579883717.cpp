#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a,b,c,d;
	while( cin >> a >> b ){
		d = 0;
		c = a + b;
		while( c != 0 ){
			c/=10;
			d++;
		}
		cout << d << endl;
	}
	
	return 0; 
}