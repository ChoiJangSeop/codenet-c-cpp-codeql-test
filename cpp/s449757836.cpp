#include<iostream>
using namespace std;

int main(void){
	int a,b,T,c,d,e,f,g,h,i,A=0;
	while(cin>>a>>b){
		cin>>a>>b;
		T=a+b;
		
		c=T/1000000;
		if(c>=1) A=A+1;
		
		d=T/100000;
		if(d>=1)A=A+1;
		
		e=T/10000;
		if(e>=1)A=A+1;
		
		f=T/1000;
		if(f>=1)A=A+1;
		
		g=T/100;
		if(f>=1)A=A+1;
		
		h=T/10;
		if(h>=1)A=A+1;
		
		i=T/1;
		if(i>=1)A=A+1;
		
		cout<<A<<endl;
	}
	return 0;
}