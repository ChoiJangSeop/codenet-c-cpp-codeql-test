#include<iostream>	
using namespace std;

int main(){
	int a,b,Num,i ;
	while(cin>>a>>b){
		Num= a + b ;
		for( i = 0 ;Num> 0;i++){
			Num/= 10;
		}
	
		cout << i << endl;
	}
	return 0;
}