#include <iostream>
using namespace std;

int main(){
	
	int a, b, sum;
	sum = a + b;
	int x[114514];
	int n = 0;
	
	
	while(cin >> a >> b){
		
		sum = a + b;
		int z = 0;
		
		while(sum != 0){
			sum = sum / 10;
			z++;
			
		}
		
		x[n] = z;
		n++;	
			
	}
	
	for(int c=0; c<n; c++){
		cout << x[c] << endl;
	}
	
	
	

	return 0;
	
}