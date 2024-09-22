#include<iostream>
using namespace std;

int main(){
    int n,A[100];
    cin >> n;
    
    for(int i=0; i <n ; i++) cin >> A[i];
    for(int x = n-1; x >= 0; x--){
        cout << A[x];
        if(x != 0)cout << " ";
    }
    cout << endl;
    
    return 0;
    
}

