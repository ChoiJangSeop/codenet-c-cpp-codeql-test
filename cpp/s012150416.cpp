#include<iostream>
using namespace std;

int main(){
	int count;
	int num1,num2,sum;

	while(1){
		cin >> num1;
		if(cin.eof( ) )break;
		cin >> num2;

		count = 1;
		sum = num1+num2;

		while( (sum / 10) > 0){
			sum /= 10;
			count++;
		}
		cout << count << endl;
	}

	return 0;
}