#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin>>n;
	stack<int> st;
	for(int i=0; i<n; i++) {  cin>>x;	st.push(x); }
	for(int i=0; i<n; i++) 
	{
		cout<<st.top() << (i !=n-1 ? " " : "" );
		st.pop();
	}
	cout<<'\n';
	return 0;
}

