#include<iostream>
using namespace std;
int main(){

	double a,b,i=0,c;

	cin>>a>>b;
	while(i<200||a!=EOF){
		c=a+b;
		if(c*0.000000000000001>=1){
			cout<<"16"<<endl;
		}else if(c*0.00000000000001>=1){
			cout<<"15"<<endl;
		}else if(c*0.0000000000001>=1){
			cout<<"14"<<endl;
		}else if(c*0.000000000001>=1){
			cout<<"13"<<endl;
		}else if(c*0.00000000001>=1){
			cout<<"12"<<endl;
		}else if(c*0.0000000001>=1){
			cout<<"11"<<endl;
		}else if(c*0.000000001>=1){
			cout<<"10"<<endl;
		}else if(c*0.00000001>=1){
			cout<<"9"<<endl;
		}else if(c*0.0000001>=1){
			cout<<"8"<<endl;
		}else if(c*0.000001>=1){
			cout<<"7"<<endl;
		}else if(c*0.00001>=1){
			cout<<"6"<<endl;
		}else if(c*0.0001>=1){
			cout<<"5"<<endl;
		}else if(c*0.001>=1){
			cout<<"4"<<endl;
		}else if(c*0.01>=1){
			cout<<"3"<<endl;
		}else if(c*0.1>=1){
			cout<<"2"<<endl;
		}else
				cout<<"1"<<endl;
		i++;
		cin>>a>>b;
		}
			return 0;
	}