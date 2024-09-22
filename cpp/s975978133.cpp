#include<iostream>

int a,b;

int Digit(int x){
	int t=10,ans=1;
	for(;x/t > 0; ans++){
		t *= 10;
	}
	return ans;
}

int main(){
	while(std::cin >> a >> b)
		std::cout << Digit(a+b) << std::endl;
	return 0;
}