#include <bits/stdc++.h>
using namespace std;
#define INF 100005
#define MOD 1000000007

int main()
{
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string a;
    cin >> a;
    string b;
    for(int i=0;i<a.size();i++)
    {
    	if(a[i]=='0' || a[i]=='1')
    	{
    		b.push_back(a[i]);
    	}else
    	{
    		if(b.size()>0)
    		{
    			b.pop_back();
    		}
    	}
    }
    cout << b << endl;
}
