#include<bits/stdc++.h>

using namespace std;

int main()
{
    float w, h , x, y;
    cin>>w>>h>>x>>y;

    cout<<fixed<<setprecision(15)<<(0.5*w*h)<<' ';

    if(x*2==w && y*2==h)  cout<<1;
    else cout<<0;

    return 0;
}
