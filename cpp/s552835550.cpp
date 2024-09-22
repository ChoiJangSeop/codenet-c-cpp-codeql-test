#include <iostream>

using namespace std;
int main(){
	int n,m,sum,count;
	for(int i=1;cin.eof()==false;i++){
		n = -1;
		cin >> n >> m;
		if (n == -1) break;
		sum = n + m;
		count = 0;
		while(sum!=0){
			sum /= 10;
			count++;
		}
		cout << count << endl;
	}
}