#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, a, index, max1 = 0, max2 = 0;
    for(i=0; i<n; i++){
        cin >> a;
        if(a >= max1){
            index = i;
            max2 = max1;
            max1 = a;
        }else if(a >= max2){
            max2 = a;
        }
    }
    for(i=0; i<n; i++){
        if(i != index){
            printf("%d\n", max1);
        }else{
            printf("%d\n", max2);
        }
    }
    return 0;
}
