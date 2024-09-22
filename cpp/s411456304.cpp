#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	a=a+b;
	b=1;
	while(a>=9){
		b=b+1;
		a=a/10;
	}
	cout<<b<<endl;
}