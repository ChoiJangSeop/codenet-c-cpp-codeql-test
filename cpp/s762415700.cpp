#include <bits/stdc++.h>
using  namespace std;

int main(){
    int n,v,ans;
    cin >> n;
    map<int, int> V0,V1;
    pair<int, int> v1top = make_pair(-1, 0),v1sec = make_pair(-1, 0), v0top = make_pair(-1, 0), v0sec = make_pair(-1, 0);

    
    for(int i=0;i<n;i++){
        cin >> v;
        if(i%2){
            V1[v]++;
        }else{
            V0[v]++;
        }
    }

    for(auto iter = V0.begin();iter!=V0.end();iter++){
        if(v0top.second < iter->second){
            v0top.first = iter->first;
            v0top.second = iter->second;
        }else if(v0sec.second < iter->second){
            v0sec.first = iter->first;
            v0sec.second = iter->second;
        }
    }
  
    for(auto iter = V1.begin();iter!=V1.end();iter++){
        if(v1top.second < iter->second){
            v1top.first = iter->first;
            v1top.second = iter->second;
        }else if(v0sec.second < iter->second){
            v1sec.first = iter->first;
            v1sec.second = iter->second;
        }
    }
  
    if(v0top.first==v1top.first){
        if(v0top.second == v1top.second){
            if(v0sec.second < v1sec.second){
            ans = n-v0top.secon-v1sec.second;
            }else{
            ans = n-v0sec.second-v1top.second;
            }
        }else if(v0top.second > v1top.second){
            ans = n-v0top.second-v1sec.second;
        }else{
            ans = n-v0sec.second-v1top.second;
        }
    }else{
        ans = n-v0top.second-v1top.second;
    }
    cout << ans << endl;
}

