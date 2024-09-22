#include <iostream>
#include <vector>
#include <algorithm>

#define rep(x,to) for(x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int a, b, c;

	cin >> a >>b;
	c = a + b;
	int k=0;
	while (c > 0){
		k++;
		c /=10;	
	}
	if(k==0) k=1;
	cout << k << endl;
	return 0;
}