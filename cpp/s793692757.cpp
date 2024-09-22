#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = n;
	int x[n];
	for (i = 0; i < n; i++ ){
		cin >> x[i];
	}
	i = n;
	while(true){
		i--;
        cout << x[i] << " ";
		if(i == 1)break;
	}
	cout << x[i - 1] << endl;
	return 0;
}