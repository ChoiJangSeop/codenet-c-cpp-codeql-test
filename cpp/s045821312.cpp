#include<iostream>
#include<math.h>
using namespace std;
int main(){
double a,b;
while(cin>>a>>b){
a=a+b;
if(a<10)cout<<"1"<<endl;
else {
b=log10(a);
cout<<b<<endl;
}
}
return 0;
}