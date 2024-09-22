#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	while(b !=1) {
		if (a > b) swap(a,b);
		b = b % a;
		if (b==0){
			cout << a << endl;
			break;
		}
		if (b==1){
			cout << b << endl;
			break;
		}
	}
}