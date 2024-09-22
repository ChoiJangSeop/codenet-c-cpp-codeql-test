#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,x[100],i,j;
	cin>>n;
	for(i=0;i<n;i++){
	cin>>x[i];
	}
	for(j=n-1;j>=0;j--){
	cout<<x[j]<<" ";
	}
	cout<<endl;
        return 0;
    }
