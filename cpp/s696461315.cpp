#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	cin >> a;
	for(int i = 0 ; i < a.size(); i++){
		if(a[i] == '1')
			cout << '9';
		else
			cout << '1';
	}
	cout << endl;
	return 0;
}