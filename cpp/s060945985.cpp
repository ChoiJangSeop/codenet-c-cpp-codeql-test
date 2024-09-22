#include<bits/stdc++.h>
using namespace std;
string in,res;
int main()
{
	cin>>in;
	res="";
	for(int i=0;i<in.length();++i)
	{
		if(in[i]=='B')
		{
			if(res!="")
				res.erase(res.begin()+res.length()-1);
		}
		else	res+=in[i];
	}
	cout<<res<<endl;
}