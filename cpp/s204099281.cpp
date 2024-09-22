#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    string T;
    for (const auto &s: S){
        if (s != 'B'){
            T.push_back(s);
            continue;
        }
        if (T.size() > 0)
            T.pop_back();
    }

    cout << T << endl;
}