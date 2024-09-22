#include <bits/stdc++.h>
using namespace std;

int main() {
	string S,ans;
	cin>>S;
	for(int i=0;i<S.size();i++){
		if(S[i]=='0'||S[i]=='1'){
			ans+=S[i];
		}else if(S[i]=='B'){
			if(!ans.empty()){
				ans.pop_back();
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}