#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    int a[100];
    int i;
    
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (i = n-1; i >= 0; i--){
        if (i != 0){
            cout << a[i] << " ";
        }else{
            cout << a[i] << endl;
        }   
    }

    return 0;
}