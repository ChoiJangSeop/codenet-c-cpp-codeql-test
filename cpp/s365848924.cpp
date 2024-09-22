#include <iostream>

int gcd(int a, int b){
	if(a == 0) return b;
	else return gcd(b % a, a);
	
}

int main(){

	int x, y;


	std::cin >> x >> y;

	std::cout << gcd(x, y) << std::endl;
	

	return 0;
}

