#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a = 0, b = 0;
	int i = 0;
	while (1){
		cin >> a >> b;
		int c = a + b;
		if (a + b < 10){
			cout << "1" << endl;
		}
		else if (a + b < 100){
			cout << "2" << endl;
		}
		else if (a + b < 1000){
			cout << "3" << endl;
		}
		else if (a + b < 10000){
			cout << "4" << endl;
		}
		else if (a + b < 100000){
			cout << "5" << endl;
		}
		else if (a + b < 1000000){
			cout << "6" << endl;
		}
		else{
			cout << "7" << endl;
		}
	}
	return 0;
}