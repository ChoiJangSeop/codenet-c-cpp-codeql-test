#include <iostream>
using namespace std;
int main(){
	int i,n;
	int a[100];

	cin >> n;
	for( i=0; i<n; i++ ) cin >> a[i];

	for( i=n-1; i>=0; i-- ){
		if( i != n-1 ) cout << " ";
		cout << a[i];
	}
	cout << endl;

	return 0;
}