#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int a,b,sum;
    string s;
    while(scanf("%d%d",&a,&b)!=EOF){
        s=to_string(a+b);
        cout << s.size() << endl;
    }
    return 0;
}
