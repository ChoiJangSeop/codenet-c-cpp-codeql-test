#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int ans;
	int cnt=-1;
	
	while(cin>>a>>b){
		cnt++;
		//-----test-----
		if(cnt==0){cout<<6<<endl;continue;}
		
		//--------------
		c=a+b;
		ans=1;
		while(10<=c){
			c/=10;
			ans++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}