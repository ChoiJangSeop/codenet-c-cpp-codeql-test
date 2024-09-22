#include <bits/stdc++.h>

using namespace std;
int a[101],b[101];
int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for (int j=1; j<=n; j++)
    {
        b[j]=a[n+1-j];
    }
    for (int j=1; j<=n; j++)
    {
        cout << b[j];
        if(j != n)
        {
            cout << " ";
        }
        else
        {
            cout <<endl;

        }
    }
    return 0;
}






