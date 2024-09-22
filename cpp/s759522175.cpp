#include<iostream>

using namespace std;


int main()
{
    int i,j,v,n,k;
    cin>>n;
    int a[100];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(k=0;k<n-1;k++){
        cout<<a[k]<<endl;
    }
    cout<<a[n-1]<<endl;
    for(i=1;i<n;i++){
        v=a[i];
        for(j=i-1;j>=-1&&a[j]>=v;j--){
            a[j+1]=a[j];
        }
        j++;
        a[j]=v;
        for(k=0;k<n-1;k++){
        cout<<a[k]<<endl;
        }
        cout<<a[n-1]<<endl;
    }
    
    return 0;
}