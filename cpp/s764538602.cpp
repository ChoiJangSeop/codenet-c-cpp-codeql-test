#include <iostream>

using namespace std;

int main()
{
    int number,x, i;
    cin >> number >> x;
    int foo[number];
    for(i=0; i<=(number-1); i++)
    {
     foo[i]=x;
        cin >> x;
    }
   for(i=number-1; i>=0; i--)
   {
       cout << foo[i];
       if(i!=0)
       cout << " ";
       else
       cout << endl;
       
   }
   return 0;
}
