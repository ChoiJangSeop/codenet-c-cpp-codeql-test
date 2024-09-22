#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){

	int n;
	int day[1000];
	
	cin >> n;
	
	for( int i = 0; i < n; i++ ){
    	cin >> day[i];
	}
	
	for( int i = n - 1; i >= 0; i--){
		if(i == 0){
			cout << day[i] ;
		}else{
		
		cout << day[i] << " ";
		}
	}
	cout << endl;





return 0;
}