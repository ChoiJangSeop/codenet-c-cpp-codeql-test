#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >>  a >>  b;
	int sum = a + b;
	int flag = 0;
	int rest = 100;
	while(sum >= 10){
		sum = sum / 10 ;
		flag++;
	}
	flag++;
	cout << flag <<endl;
    return 0;
}