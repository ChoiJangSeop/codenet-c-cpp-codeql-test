#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0, a=0, b=0, c=0;
    char tmp;
    vector<char> S;
    string T;
    cin >> T;
    S.push_back(T[0]);
    for(int i=1; i<T.size(); i++){
		
	if(T[i]=='B'){
	    if(S.size() == 0)
		continue;
	    S.pop_back();
	}
	else
	    S.push_back(T[i]);
    }
    
    for(int i=0; i<S.size(); i++){
	cout <<S[i];
    }
    cout << endl;;

    
}
