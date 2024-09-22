#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a[1000];
    int n;
    
    cin>>n;
    int i;
    for(i=0;i<=n;i=i+1)
    {cin>>a[i];}
    
    int j;
    for(j=n-1;j >-1;j=j-1)
    {cout<<a[j];
    
    if(j>0){cout<<" ";}
    if(j==0){cout<<endl;}
}
}
