#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int list[100];
    for(int i=0;i<n;i++)cin>>list[i];

for(int i=n-1;i>=0;i--){
    if( i != 0)cout<<" ";
    cout<<list[i];
    }
    cout<<endl;


    return 0;
}