#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    int n;
    int a[150]={};
    cin>>n;
    for(int z=1;z<=n;z++){
        cin>>a[z];
    }
    for(int z=n;z>=2;z--){
        cout<<a[z]<<" ";
    }
    cout<<a[1]<<endl;
}
