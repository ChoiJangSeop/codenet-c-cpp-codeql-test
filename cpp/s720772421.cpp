#include<iostream>
using namespace std;
int main(){
    string n;
    cin>>n;

    for(int i=0;i<n.size();i++){
        if(n.at(i)==9){
        n.at(i)-'0'-=8;
    }
    else if(n.at(i)==1){
        n.at(i)-'0'+=8
    }

    }
    cout<<n<<endl;
}
