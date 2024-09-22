#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x[100];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<x[n-i]<<" ";
    }
    
    cout<<x[0]<<endl;
    
    return 0;
}

