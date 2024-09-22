#include <bits/stdc++.h>


#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define brep(i,a,b,c) for(int i=a; i>b; i-=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back

const int N = 2e5 + 10;


using namespace std;

int main()
{



	IOS;

	string s,ans;

	cin >> s;

    loop(i,s.length())

    {
    	if(s.at(i) != 'B')
    	{
    		ans.push_back(s.at(i));
    	}

    	else if (ans.size() > 0)
    	{
    		ans.pop_back();
    	}
    }


    cout<<ans<<endl;
	return 0;

}
