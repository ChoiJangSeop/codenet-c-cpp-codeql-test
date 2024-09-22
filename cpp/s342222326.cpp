#include<iostream>
using namespace std;
#define N 200

int main()
{
int a=0,b=0,n;

while( cin>>a>>b ){
	n=1;
 if(a>=0 && b>=0 && a<=1000000 && b<=1000000)
 	{
	 a = a+b;
	 while(a>=10)
	 	{
		 a = a/10;
		 n += 1;
	 	}
 	}
 	cout<<n<<endl;
 	
 	}


}