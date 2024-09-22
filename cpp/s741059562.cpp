#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    int   n ;
    cin >> n ;
    int a[n] ;

    for(int i=0;i<n;i++)
        cin >> a[i];


    int* m=max_element(a,a+n);
    int a1=*m;
    *m=0;
    int* m1=max_element(a,a+n);
    int a2=*m1;
    *m=a1;
    for(int i=0;i<n;i++)
    {
        if (a[i]<a1) cout<<a1<<endl;
        else
        {

            cout<<a2<<endl ;
        }
    }

    return 0;
}


