#include <iostream>

int main(int argc, char const *argv[])
{
	
	while(!std::cin.eof()){
		int a,b;
		std::cin >> a >> b;
		int p = 10;
		int i = 1;
		while((a+b)/p != 0){
			i ++;
			p *= 10;
		}
		std::cout << i << std::endl;
	}
	return 0;
}