#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int judge(int n){
	if (n / 1000000 != 0) return 7;
	if (n / 100000 != 0) return 6;
	if (n / 10000 != 0) return 5;
	if (n / 1000 != 0) return 4;
	if (n / 100 != 0) return 3;
	if (n / 10 != 0) return 2;
	if (n / 1 != 0) return 1;
}


int main(){
	int a, b;
	int n , i , j;
	int x[200];
	j = 0;
	while (cin >> a >> b)
	{
		n = a + b;
		x[j] = judge(n);
		j++;
		cout << "#" << endl;
	}
	for (int i = 0; i < j; i++){
		cout << x[i] << endl;
	}

	return 0;
}
