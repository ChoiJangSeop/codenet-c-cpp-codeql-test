#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<functional>
#include<queue>
#include<math.h>
#define INF 999999

using namespace std;

int main()
{
	int ans[210];

	int a, b;
	int k = 0;
	while(cin>>a>>b){
			int c = a + b;
			int d = c;
			int count = 0;
			while (d != 0) {
				d = d / 10;
				count++;
			}
			ans[k] = count;
			k++;
		
	}

	for (int i = 0; i < k; i++) {
		cout << ans[i] << endl;
	}

	return 0;
}