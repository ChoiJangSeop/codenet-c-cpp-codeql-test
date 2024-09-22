#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;

int main(){
	cin >> N;
	A = vector<int>(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	
	int first = 0;
	for (int i = 0; i < N; i++)
	{
		if(A[i] > A[first]) first = i;
	}
	int second = (first + 1) % N;
	for (int i = 0; i < N; i++)
	{
		if(i == first) continue;
		if(A[i] > A[second]) second = i;
	}
	
	for (int i = 0; i < N; i++)
	{
		if (i == first) {
			cout << A[second] << '\n';
		} else {
			cout << A[first] << '\n';
		}
	}
	cout << flush;
	return 0;
}