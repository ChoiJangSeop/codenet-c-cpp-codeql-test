#include<iostream>
using namespace std;

int main(){
    int n, a[100];
    cin >> n;
    
    for(int i = 0; i < n; i++) cin>> a[i];
    
    for (int i = (n-1); i >= 0; i--){
        if(i != (n-1)) cout << " ";
        cout << a[i];
        
    }
    cout << endl;
    return 0;
    
}
