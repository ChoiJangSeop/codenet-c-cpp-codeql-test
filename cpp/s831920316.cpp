#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int a;
    int ans=0;
    cin>>i;
    if(i/100==9)ans+=100;
    else ans+=900;
    if(i%100/10==9)ans+=10;
    else ans+=90;
    if(i%10==9)ans+=1;
    else ans+=9;

    cout<<ans<<endl;
}