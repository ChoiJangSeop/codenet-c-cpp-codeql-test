#include <iostream>
using namespace std;

int main(){
	int n = 0;
	int math[1000]; 
	cin >> n;
for (int i = 1; i < n+1; i++) {
	cin >> math[i];
}
for (int a = n; a > 0; a--) {
	if(a>1) {
		cout << math[a] << '\n';
	}
	else {
		cout << math[1];
	}
}
cout << endl;
return 0;
}