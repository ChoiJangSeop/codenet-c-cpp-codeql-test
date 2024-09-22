#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a, b, c, i=0, count=0, data[200];
	while(cin>>a>>b){
		c=a+b;
		while(c!=0){
			c/=10;
			count++;
		}
		
		data[i]=count;
		c=count=0;
		i++;
	}
	i=0;
	while(data[i]!=0){
		cout<<data[i]<<endl;
		i++;
	}
	return 0;
}