#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    while(x>=0){
		while(x<y){
		y=y-x;
		}
		while(x>y){
			x=x-y;
		}
		if(x==y){
			cout<<x<<endl;
			break;
		}
	}
}

