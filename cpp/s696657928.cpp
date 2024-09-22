#include <bits/stdc++.h>
using namespace std;


int main(){


    int n, i;

    int m = 0;


    cin >> n;


    vector<int> a(n + 1);

    vector<int> l(n + 2);

    vector<int> r(n + 2);


    for( i = 1 ; i < n + 1 ; i = i + 1 ){

         cin >> a.at(i);

         }


    for( i = 1 ; i < n + 1 ; i = i + 1 ){

         l.at(i) = max( m, a.at(i) );

         m = max( m, a.at(i) );

         }


    m = 0;


    for( i = n ; i > 0 ; i = i - 1 ){

         r.at(i) = max( m, a.at(i) );

         m = max( m, a.at(i) );

         }


    for( i = 1 ; i < n + 1 ; i = i + 1 ){

         cout << max( l.at(i - 1), r.at(i + 1) ) << endl;

         }

    
    return 0;


    }