#include<iostream>
using namespace std;

int main(){
	int n, i = 0;
	int a[100];
	cin >> n;

	for (i = 0; i < n; i++){
		cin >> a[i];
	}

	for (i = n - 1; i >= 0; i--){
		cout << a[i];
		if (i != n - 1)
			cout << " ";
	}

	while (1);

	return 0;
}