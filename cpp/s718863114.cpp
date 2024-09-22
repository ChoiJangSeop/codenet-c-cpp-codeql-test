#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i=n-1;i>=0;i--){
		cin >> a[i];
	}
	cout << a[0];
	for(int i=1;i<n;i++) cout << " " << a[i];
	cout << endl;
}