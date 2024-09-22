#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int a[n];
	cin >> a[0];
	for(int i = 1; i < n; i++){
		cin >> " " >> a[i];
	}
	cout << a[6];
	for(int j = 5; j >= 0; j--){
		cout << " " << a[j];
	}
	cout << endl;

	return 0;
}