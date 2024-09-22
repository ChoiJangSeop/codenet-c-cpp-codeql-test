#include <iostream>
int main(){
	int a,b,c;
	std::cin>>a>>b>>c;
	if(a*a==b*b+c*c){
		std::cout<<"YES"<<std::endl;
		}
	else if(b*b==a*a+c*c){
		std::cout<<"YES"<<std::endl;
		}
	else if(c*c==a*a+b*b){
		std::cout<<"YES"<<std::endl;
		}
	else std::cout<<"NO"<<std::endl;

	
		
	 return 0;
	}