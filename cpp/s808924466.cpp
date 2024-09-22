#include <iostream>
using namespace std;
int main(){
	int a,b,c=1,i;
	while(cin>>a>>b){
	for(i=0;i<8;i++){
		c*=10;
		if(a<b){
			cout<<i<<endl;
			break;
		  }
		}
	cout<<i<<endl;
	}
	return 0;
	}
