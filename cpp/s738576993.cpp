#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int n;
	cin >> n;
	
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = n; i > 0; i--){
		printf("%d ", a[i]);
	}
	
	printf("\n");

	return 0;


}