//
//  main.cpp
//  CppTest
//
//  Created by Ryu on 2017/02/08.
//  Copyright ?? 2017??´ Ryu. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    long a[200];
    long b[200];
    int keta[200];
    
    int now = 0;
    long p;
    while(cin >> a[now] >> b[now]){
        p = a[now] + b[now];
        int k = 0;
        while(p >= pow(10, k)){
            k++;
        }
        keta[now] = k;
        printf("%d", k);
        now++;
    }
    
    /*
    printf("finished");
    
    int n = 0;
    while(keta[n] == 0){
        printf("%d", keta[n]);
        n++;
    }
    */
    
    return 0;
}