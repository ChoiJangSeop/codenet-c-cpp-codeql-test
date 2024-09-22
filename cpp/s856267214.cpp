#include<iostream>
#include<string>

using namespace std;

int main()
{
	int a, b, i;
	while(cin>>a>>b){
		a += b;
		
		for(i = 1;; i++){
			if(a < 10){
				break;
			}
			a = a / 10;
		}
		
		cout << i << endl;
	}
}