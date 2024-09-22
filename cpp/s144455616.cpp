#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	long	a,b;

	for(int i=0;i<200;i++){
		cin >> a;
		cin >> b;

		cout << (int)log10(a+b)+1 << endl;
	}

	return 0;
}