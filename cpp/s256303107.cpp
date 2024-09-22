#include <iostream>
using namespace std;

int gcd(int a, int b);

void swap(int *a, int *b);

int main()
{
    int a, b;
    cin>>a>>b;
    
    if(a < b)
        swap(a, b);

    cout<<gcd(a, b)<<endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int gcd(int a, int b)
{
    while(1)
    {
        a = a%b;
        if(b%a == 0)
            return a;
        b = b%a;
        if(a%b == 0)
            return b;
    }
}