#include <iostream>
using namespace std;
int main()
{
	int a[100],n,i;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	for (i=n-1;i>= 0; i--){
		cout << a[i];
		if (i != 0) cout << " ";
		else cout << endl;
	}
}