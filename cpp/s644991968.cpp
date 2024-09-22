#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,keta[300] = {0},kcor = 0;
	while(cin >> a){
		cin >> b;
		if(a+b == 0){
			keta[kcor] = 1;
		}
		else{
			keta[kcor] = log10(double(a+b))+1.000001;
		}
		kcor++;
	}
	for(int i = 0;i < kcor;i++){
		cout << keta[i] << endl;
	}
	return 0;
}