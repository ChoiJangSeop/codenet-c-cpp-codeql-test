#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<iomanip>
#include<map>
using namespace std;
typedef pair<int, pair<int, int> >PP;
typedef long long ll;
typedef pair<ll, ll>P;
typedef vector<int>vec;
int inf=-1;
ll mod = pow(10, 9) + 7;

int main() {
	int n;cin>>n;
	int a[200010];
	int b[200010];
	int index=0;
	int m=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		if(m<a[i]){
			index=a[i];
		}
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(b[i]==index){
			cout<<a[n-2]<<endl;
		}
		else{
			cout<<a[n-1]<<endl;
		}
	}
	return 0;
}