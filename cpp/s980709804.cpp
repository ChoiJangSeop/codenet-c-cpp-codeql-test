#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int *num;
    num = new int [N];
    for(int i=0;i<N;i++){
        cin >> num[i];
    }
    for(int i=0;i<N-1;i++){
        cout << num[N-i] << ' ';
    }
    cout << num[0] << endl;
    return 0;
} 