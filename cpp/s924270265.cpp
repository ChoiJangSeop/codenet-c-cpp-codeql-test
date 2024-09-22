#include <bits/stdc++.h>
using namespace std;
template < typename T > std::string to_string( const T& n ){
	std::ostringstream stm ;
	stm << n ;
	return stm.str() ;
}


int main(void){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[n-i-1];
		if(i != n-1)cout << " ";
	}
	cout << "\n";
	return 0;
}
