#include <iostream>
using namespace std;
int main(){
	int i,j,tmp;
	int num[100];
	int t;
	cin >> t;
	for( i=0;i<t;i++ )
		cin >> num[i];
	for( i=0;i<t;i++ ){
		for( j=i+1;j<t;j++ ){
			if(num[i]<num[j]){
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for( i=0;i<t;i++)
		cout << num[i] <<" ";
	cout << endl;
}