#include<iostream>
#include<sstream>
using namespace std;

int main(){
	int a, b;
	while(true){
		cin >> a >> b;
		stringstream ss;
		ss << a+b;
		cout << ss.str().size() << endl;
	}
}