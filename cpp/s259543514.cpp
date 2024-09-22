#include <iostream>
#include <string>

int main(){
    string a;
	cin>>a;
	for(i=0;i<3;i++)
	{
		a[i]=(a[i]=='1'?'9':'1');
	}
	cout<<a<<endl;
}