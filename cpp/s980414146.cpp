#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<random>

using namespace std;

/*
ソート：sort(v.begin(),v.end(), 0)
合計：accumulate(v.begin(),v.end(), 0)
最小値：*min_element(v.begin(),v.end())
最大値：*max_element(v.begin(),v.end())
最大公約数：__gcd(a,b)
*/

int main(int argc, char const *argv[]){
    int n;
    vector<int> a, b;
    cin >> n;
    for(int i=0;i<n;i++){
        int _a;
        cin >> _a;
        a.push_back(_a);
        b.push_back(_a);
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]==b[n-1]){
            cout << b[n-2] << endl;
        }else{
            cout << b[n-1] << endl;
        }
    }
    

    return 0;
}