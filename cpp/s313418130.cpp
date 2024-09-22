#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int a[1000000],b[1000000];
    for(int i=0;i<200;i++){
        cin>>a[i]>>b[i];
        a[i]+b[i];
        if(a[i]+b[i]<10){
        cout<<"1"<<endl;
        }
        else if(a[i]+b[i]<100){
        cout<<"2"<<endl;
        }
        else if(a[i]+b[i]<1000){
            cout<<"3"<<endl;
        }
        else if(a[i]+b[i]<10000){
            cout<<"4"<<endl;
        }
        else if(a[i]+b[i]<100000){
            cout<<"5"<<endl;
        }
        else if(a[i]+b[i]<1000000){
            cout<<"6"<<endl;
        }
    }
    return 0;
}