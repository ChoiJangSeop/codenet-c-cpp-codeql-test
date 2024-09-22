#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void){
	int a,b,dig = 0;
	int sum;

	while(1){
		std::cin >> a >> b;
		sum = a + b;
		while(1){
			if(sum<1) break;
			sum = sum / 10;
			dig++;
		}
		std::cout << dig << "\n";
		if(std::cin.eof()){
			break;
		}
		dig = 0;
	}
	return 0;
}