#include<iostream>

using namespace std;

int main(void){
	int a,b,;
	
	cin >> a;
	if(a/100==9){
		if((a%100)/10==9){
			if(a%10==9){
				cout << 111 << endl;
			}
			else
			cout << 119 << endl;
		}
		else if(a%10==9){
		cout << 191 << endl;
		}
		else 
		cout << 199 << endl;
	}else if((a%100)/10==9){
		if(a%10==9){
			cout << 911 << endl;
		}else 
			cout << 919 << endl;
	}else if(a%10==9){
		cout << 991 << endl;
	}else
		cout << 999 << endl;
		
return 0;
}