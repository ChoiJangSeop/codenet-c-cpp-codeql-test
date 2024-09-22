#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;
 
int main(){
string s;
int a,b,c;
while (getline(cin, s ))
{
std::istringstream iss1(s.substr(0,SpaceInd));
iss1 >> a;
 
std::istringstream iss2(s.substr(SpaceInd+1));
iss2 >> b;
cout<<(int)log10(a+b)<<endl;
}
return 0;
}