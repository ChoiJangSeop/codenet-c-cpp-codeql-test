#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	int max,c,d;
	max=0;
	c=0;
	d=0;
	for(int i=0;i<N;i++){
		cin >> A.at(i);
		if(A.at(i)>=max){
			max=A.at(i);
			c=i;
		}
	}
	for(int i=0;i<N;i++){
		if(i==c){
			A.at(i)=0;
			cout << *max_element(A.begin(),A.end()) <<endl;
		}
		else{
			cout << max <<endl;
		}
	}
}