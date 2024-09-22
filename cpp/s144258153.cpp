#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using LL = long long;
using P = pair<int,int>;


int main(){
	int N; cin >> N;
	vector<int> A(N);
	vector<int> num(200010);
	rep(i,N){
		int tmp;cin >> tmp;
		A[i]  = tmp;
		num[tmp]++;
	}
	rep(i,N){
		num[A[i]]--;
		for(int j = 200010; j >= 2; j--){
			if(num[j]>0){
				cout << j << endl;
				break;
			}
		}
		num[A[i]]++;
	}
	return 0;
}












