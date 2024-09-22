#include <bits/stdc++.h>

using namespace std;

int main()
{
    int raw[100]={};
    int n;    
    cin >> n;
    for(int i=0;i<n;i++){cin >> raw[i];}
    for(int j=n-1; 0 <= j; j--)
    {
        printf("%d", raw[j]);
        if(j!=0) {cout << ' ';}
        else     {cout << endl;}
    }
}
