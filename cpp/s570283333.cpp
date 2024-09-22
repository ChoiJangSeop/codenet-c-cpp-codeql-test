#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ab;
    cin>>ab;
    for(int i=0;i<ab.size();i++)
    {
        if(ab[i]=='1')
            ab[i]='9';
        else if(ab[i]=='9')
            ab[i]='1';
            cout<<ab[i]<<endl;
    }
    cout<<ab<<endl;
    return 0;
}
