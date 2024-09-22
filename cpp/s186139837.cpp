#include<bits/stdc++.h>
using namespace std;
int cmp(int a, int b)
{
	return a > b;
}

int a[200000 + 7], b[200000 + 7];
int main()
{
	int n;
	
	while(~scanf("%d", &n))
	{
		for(int i = 0; i < n; i ++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i ++)
		{		
			if(b[i] == a[0]) cout << a[1] << endl;
			else cout << a[0] << endl;
//			cout << a[0] << endl;
		}
		
	}
	
	return 0;
}