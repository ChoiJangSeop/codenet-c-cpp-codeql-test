#include <iostream>
using namespace std;
int main(void){
   int n,a[100]={0};
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int j=n-1;
   cout<<a[j];

   for(int i=0;i<n-1;i++){
       j=n-1-i;
       cout<<" "<<a[j-1];
   }
   cout<<endl;

}


