#include<iostream>
using namespace std;
 int USCLN(int a, int b)
        {            
            a=Math.Abs(a); 
            b=Math.Abs(b);            
            if (a==0 ||b==0)
                return a+b;
            while (a!=b)
            {
                if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
int main()
{
   int a, b;
   cin >> a >> b;
   cout << USCLN(a,b) << endl;

}