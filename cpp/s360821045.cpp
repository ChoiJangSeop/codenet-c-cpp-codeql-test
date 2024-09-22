#include<iostream>
using namespace std;

int main(){
	int a, b, c, k;
	string str;
	while(1){
		k = 1;
		getline( cin, str );
		if( str.size() == 0 ){
			break;
		}
		sscanf( str.c_str(), "%d %d", &a, &b );
		c = a + b;
		while( c/10 > 0 ){
			c /= 10;
			k++;
		}
		printf("%d\n", k );
	}
	return 0;
}