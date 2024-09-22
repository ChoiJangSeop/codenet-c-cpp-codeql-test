#include<iostream>
using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
   if (a%b == 0) 
   {
      cout << b;
      return b;
   }
   if (b%a == 0) 
   {
      cout << a;
      return a;
   }
   else
   {
      while(a != b)
      {
         if (a > b) a = a - b;
         if (b > a) b = b - a;
      }
      cout << a;
      return a;
   }
   
   return 1;
}