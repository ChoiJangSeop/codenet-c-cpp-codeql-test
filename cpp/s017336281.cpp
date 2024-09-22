#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	pair<int,int> a[n] ;
	for(int i = 0 ; i < n ; i++){ cin >> a[i].first ;
	a[i].second = i ;}
	sort(a,a+n) ;
	int max = a[n-1].second ;
	for(int i = 0 ; i < n ; i++){
		if(i == max){
			cout << a[n-2].first << '\n' ;
		}else{
			cout << a[n-1].first << '\n';
		}
	}
	return 0;
}