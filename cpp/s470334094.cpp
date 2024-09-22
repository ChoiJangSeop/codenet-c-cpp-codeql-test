#include <iostream>
using namespace std;
int main()
{
   int a,b;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
   		int c;
		c=a+b;
		int numble=0;
		while(c>0)
		{
			c/=10;
			numble++;
		}
		cout<<numble<<endl;
   }
   return 0;
}