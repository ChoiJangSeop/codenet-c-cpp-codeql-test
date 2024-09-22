#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int number[n];
    for(int i=0;i<n;i++){
        cin >> k;
        number[i] =k;
    }
    for(int i =n;i>0;i--){
        if(i!=n){cout << " ";}
        cout << number[i];
    }
    cout << endl;
}
