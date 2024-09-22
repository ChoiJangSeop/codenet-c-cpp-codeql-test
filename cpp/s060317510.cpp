#include <bits/stdc++.h>
using namespace std;
stack<char> n, m;
string temp;
int main(){
    cin >> temp;
    for(int i=0; i<temp.length();i++){
        if (!n.empty() && temp[i]=="B"[0]){
            n.pop();
        } else if (temp[i] != "B"[0]) {
            n.push(temp[i]);
        }
    }
    while (!n.empty()){
        m.push(n.top());
        n.pop();
    }
    while (!m.empty()){
        cout << m.top();
        m.pop();
    }
}