#include"bits/stdc++.h"
using namespace std;
#define LL long long
#define PB push_back
#define MP make_pair

int main(){
	int N;
	LL A[200000];
	LL sum = 0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i];
		sum += A[i];
	}
	LL ans = 0;
	for(int i=0; i<N; i++){
		ans = max(ans, sum-A[i]);
	}
	cout << ans << endl;
}
