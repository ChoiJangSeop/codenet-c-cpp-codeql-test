#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int a[200], b[200], n, ans=0;
	for (int i = 0; i < 200; i++) 
	{
		cin >> a[i] >> b[i];
		n = a[i] + b[i];
		while (n >= 1) 
		{
			n /= 10;
			ans++;
		}
		cout << ans << endl;
		ans = 0;
	}
}
