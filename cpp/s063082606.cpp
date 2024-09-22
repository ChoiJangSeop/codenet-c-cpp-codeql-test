#include<iostream>
using namespace std;
#define N 200

int main()
{
int a=0,b=0,n[N],kaisu=0;

do{
 n[kaisu]=1;
 cin>>a>>b;
 if(a>=0 && b>=0 && a<=1000000 && b<=1000000)
 	{
	 a = a+b;
	 while(a>=10)
	 	{
		 a = a/10;
		 n[kaisu] += 1;
	 	}
 	}
 	kaisu++;
 	}while(kaisu<N && b!=999);

 for(int i=0 ; i<kaisu;i++)
  cout<<n[i]<<endl;
}