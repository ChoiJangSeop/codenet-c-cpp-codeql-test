#include<iostream>
int gcd(int x,int y){
	if(x%y==0) return y;
	else return gcd(y,x%y);
	}
int main(){
	int x,y;
	std::cin>>x>>y;
	if(x<y){
		int tmp=y;
		y=x;
		x=tmp;
	}
	std::cout<<gcd(x,y)<<'\n';
	 return 0;
}
