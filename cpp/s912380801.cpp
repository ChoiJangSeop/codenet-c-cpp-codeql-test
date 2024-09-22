#include <iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int n=a+b;
		for(int i=0; i<9; i++){
			if(n==0){
				cout << i << endl;
				break;
			}
			n/=10;
		}
	}
	return 0;
}