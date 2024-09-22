#include<iostream>
#include<array>

using namespace std;

int main(){
    int n;
    array<int,200000>a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a.at(i);
    }
    int max = 0,max2 = 0,num = 0;
    for(int i = 0; i < n; i++){
        if(a.at(i) > max){
            max2 = max;
            max = a.at(i);
            num = i;
        }else if(a.at(i) > max2){
            max2 = a.at(i);
        }
    }
    for(int i = 0; i < n; i++){
        if(i != num) cout<<max<<endl;
        else cout<<max2<<endl;
    }
}