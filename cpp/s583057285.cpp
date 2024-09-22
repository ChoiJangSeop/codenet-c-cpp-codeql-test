#include <iostream>

using namespace std;

int main (){
	int a,b;
	cin>>a>>b;
	int a1=a;
	int b1=b;
    int gcd;
    if (a==b){
    	cout<<a;
    	return 0;
    }
    while (a1>0 && b1>0){
        if (a1>b1)
            a1=a1%b1;
        else if (a1<b1)
            b1=b1%a1;
    }
    gcd=a1+b1;
    cout<<gcd;
	return 0;
}