#include<iostream>
#include<iomanip>
using namespace std;

int main(){
double PI = 3.14159265358979;
double r;
cin>>r;
cout<<fixed<<setprecision(20)<<r*r*PI<<2*r*PI<<endl;
return 0;
}