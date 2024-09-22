#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	int i;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
	for(i=n-1;i>0;i--){
		cout<<array[i]<<" ";
	}
	cout<<array[0]<<endl;
	return 0;
}