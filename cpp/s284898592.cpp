#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int a[100];
for(int i = 0;i < n;i++) cin >> a[i] ;
for(int j = 0;j < n-1-j;j++) swap(a[j],a[n-1-j]);
for(int k = 0 ;k < n; k++)
if (k == 0)cout << a[k]; 
else cout << " " << a[k];
 cout << endl;



return (0);
}
