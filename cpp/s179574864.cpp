//
//  main.cpp
//  b
//
//  Created by h3037178 on 2017/07/31.
//  Copyright ?? 2017??´ ?????£?????????. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,o,b=0,f;
    for(int p=0;p<200;p++){
        cin>>i>>o;
        b=0;
        f=i+o;
        if(f<=0||f>2000000  ){
            break;
        }
        for(int j=1;j<=1000000;j=j*10){
            if(i+o>=j){
                b++;
            }else{
                break;
            }
        }
        cout<<b<<endl;
        }
}