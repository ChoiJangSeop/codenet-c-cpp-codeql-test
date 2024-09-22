#include<iostream>
using namespace std;

int main(void){
	unsigned int a,b,sum;
	while(cin >> a >> b){
		sum = a + b;
		int ans = 1;
		while(sum > 10){
			sum = sum / 10;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}