#include<bits/stdc++.h>
using namespace std;
int main(){
 string n;
 cin >> n;
 for(int i = 0; i < 3; i++){
 if(n[i]=='9')n[i] = '1';
 else n[i] = '9';
}
cout << n << endl;
}