#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int s=a+b;
		if(s>=1000000)a=7;
		else if(s<1000000&&s>=100000)a=6;
		else if(s<100000&&s>=10000)a=5;
		else if(s<10000&&s>=1000)a=4;
		else if(s<1000&&s>=100)a=3;
		else if(s<100&&s>=10)a=2;
		else a=1;
		cout<<a<<endl;
	}



	return 0;
}
