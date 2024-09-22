#include<iostream>
using namespace std;

int main(){
	int a,b,i,sum=1;
	for(i=1;i<=200;i++){
		cin>>a>>b;	
		a=a+b;
		while(a>10){
			a=a%10;
			sum++;
		}
		cout<<sum<<endl;
		sum=0;
	}
    return 0;
}