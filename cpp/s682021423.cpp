#include <iostream>

int main(){
	int cnt,a,b;
	while(std::cin>>a>>b){
		for(int i=10,cnt=0;;i*=10,cnt++){
			if((a+b)/i==0){
				std::cout<<cnt<<'\n';
				break;
			}
		}
	}
	return 0;
}