#include <iostream>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    int a[n];//配列変数を宣言するときはnを定数にする。



    for(i=0;i<n;i++){
            cin >> a[i];
    }

    for(i=0;i<n-1;i++){
        cout << a[n-1-i] << " ";
    }

    cout << a[0] << endl;

}

