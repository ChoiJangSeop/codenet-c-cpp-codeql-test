#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],n,temp,i,j;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}
	a
