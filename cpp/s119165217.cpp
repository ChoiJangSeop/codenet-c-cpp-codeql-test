#include<iostream>
using namespace std;

int main(){

	int a[2];
	cin >> a[0] >> a[1];
	int check=a[0]+a[1],retval=1;
	while(check>=10){
		check/=10;
		retval++;
	}
	cout << retval << endl;

    return 0;
}