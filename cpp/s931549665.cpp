#include<iostream>
#include<stdio.h>
using namespace std;
int top=0;
int main()
{
   int a,b;
   cin>>a>>b;
   if(a%b==0)cout<<b<<endl;
   else if(b%a==0)cout<<a<<endl;
   else if(a%b!=0 || b%a!=0)
    {
   int s=min(a,b);
   for(int i=1;i<s;i++)
   {
       if(b%i==0 && a%i==0 && i>top)top=i;
   }
   cout<<top<<endl;
   }
   return 0;
}