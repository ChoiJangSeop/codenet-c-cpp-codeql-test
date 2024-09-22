#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int x,y;

cin>>x>>y;

int gcd=2;
for(int i=2;i<max(x,y);i++){

if(x%i==0 && y%i==0 && i<gcd){
gcd=i;
break;

}


}
cout<<gcd<<endl;

return 0;

}