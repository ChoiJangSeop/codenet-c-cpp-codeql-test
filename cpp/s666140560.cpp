#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

	int n, fi=0, se=0, mar;
	vector<int> v;

	cin>> n;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>> v[i];
		if(fi<=v[i]){
			se=fi;
			fi=v[i];
		}else if(se<=v[i]){
			se=v[i];
		}
	}

	if(se==0 || fi==se){
		for(int i=0;i<n;i++){
			cout<< fi <<endl;
		}
		return 0;
	}

	for(int i=0;i<n;i++){
		if(v[i]==fi) mar=i;
	}

	for(int i=0;i<n;i++){
		if(i!=mar) cout<< fi <<endl;
		else cout<< se << endl;
	}

}