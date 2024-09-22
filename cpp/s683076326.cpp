#include <iostream>
using namespace std;
int main(){

	long a,b;
	
	while(cin>>a>>b){
		long c = a+b;
		long d = 1;
		long e = 10;
		for(int j=0;j<10;j++){
			if(c == 0){
				cout<<1<<endl;
			}else if(c >= d && c < e){
				cout<<j+1<<endl;
			}
			d = d * 10;
			e = e * 10;
		}
		
	}	
	return 0;
}